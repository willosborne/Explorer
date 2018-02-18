package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxColor;
import flixel.math.FlxRect;
import flixel.graphics.FlxGraphic;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.util.FlxGradient;
import flash.system.System;

class EditorState extends FlxState {

    private var titleText:FlxText;

    private var tilesBG:FlxTilemap;
	private var tilesFG:FlxTilemap;
	private var tilesCollision:FlxTilemap;
    private var tilemaps:Array<FlxTilemap>;

	private var objectsBG:FlxGroup;
	private var objects:FlxGroup;
	private var objectsFG:FlxGroup;

    private var objectGroups:Array<FlxGroup>;

    private var currentTileset:FlxSprite;
    private var currentTileReticle:FlxSprite;
    private var tilePlacementReticle:FlxSprite;

    private var levelRect:FlxRect;

    private var currentTileIndex:Int = 0;
    private var tilesetIndices:Array<Int>;
    private var tilesetPickerLabel:FlxText;

    private var activeTilemap:FlxTilemap;
    private var activeObjectGroup:FlxGroup;

    private var layer0Label:FlxText;
    private var layer1Label:FlxText;
    private var layer2Label:FlxText;
    private var layerLabels:Array<FlxText>;

    private var background:FlxSprite;

    private var activeLayer:Int = 0;
    private var layerPicker:Dynamic;

    private var roomX:Int = 1000;
    private var roomY:Int = 1000;

    private var bgIndex:Int = 0;
    private var bgIndexText:FlxText;


    override public function create():Void {
        
        FlxG.resizeWindow(600 + 24 * 4, 500);
        FlxG.resizeGame(600 + 24 * 4, 500);
        FlxG.camera.setPosition(0,0);
        FlxG.camera.zoom = 1;

        

        FlxG.plugins.add(new FlxMouseEventManager());
        
        var empty:Array<Array<Int>> = [for(i in 0...(Const.GAME_TILES_HEIGHT)) [for(i in 0...(Const.GAME_TILES_WIDTH)) 0]];

        background = FlxGradient.createGradientFlxSprite(600, 240, [FlxColor.fromString("#FC5C7D"), FlxColor.fromString("#6A82FB")], 1, 90, true);

        tilesBG = new FlxTilemap();        
		tilesFG = new FlxTilemap();
		tilesCollision = new FlxTilemap();

        tilesBG.useScaleHack = false;
        tilesFG.useScaleHack = false;
        tilesCollision.useScaleHack = false;
        tilesBG.loadMapFrom2DArray(empty, AssetPaths.tileset1__png, Const.TILE_SIZE, Const.TILE_SIZE);
        tilesCollision.loadMapFrom2DArray(empty, AssetPaths.tileset1__png, Const.TILE_SIZE, Const.TILE_SIZE);
        tilesFG.loadMapFrom2DArray(empty, AssetPaths.tileset1__png, Const.TILE_SIZE, Const.TILE_SIZE);

        activeTilemap = tilesBG;

        levelRect = new FlxRect(0, 0, 600, 240);

		objectsBG = new FlxGroup();
		objects = new FlxGroup();
		objectsFG = new FlxGroup();

        titleText = new FlxText(10, 10, 100, "Editor Mode");

        
        currentTileset = new FlxSprite(0, 274);
        currentTileset.loadGraphic(AssetPaths.tileset1__png);
        tilesetIndices = [0, 0, 0];

        layerPicker = {x: currentTileset.x, y: currentTileset.y - 34};
        
        bgIndexText = new FlxText(layerPicker.x + 72, layerPicker.y, 100, 'BG: $bgIndex', 20);
        tilesetPickerLabel = new FlxText(bgIndexText.x + 100, layerPicker.y, 140, 'Tileset: ${tilesetIndices[activeLayer]}', 20);
    
        // currentTileset.
        currentTileReticle = new FlxSprite();
        currentTileReticle.makeGraphic(26, 26, FlxColor.TRANSPARENT);
        FlxSpriteUtil.drawRect(currentTileReticle, 0, 0, 25, 25, FlxColor.TRANSPARENT, { color: FlxColor.WHITE, thickness: 2 }, { smoothing: false });
        currentTileReticle.x = currentTileset.x - 1;
        currentTileReticle.y = currentTileset.y - 1;
        currentTileReticle.color = FlxColor.RED;


        tilePlacementReticle = new FlxSprite();
        tilePlacementReticle.loadGraphicFromSprite(currentTileReticle);
        tilePlacementReticle.color = FlxColor.RED;

        layer0Label = new FlxText(layerPicker.x, layerPicker.y, 24, "0", 20);
        layer0Label.bold = true;
        layer1Label = new FlxText(layerPicker.x + 24, layerPicker.y, 24, "1", 20);
        layer2Label = new FlxText(layerPicker.x + 48, layerPicker.y, 24, "2", 20);

        layerLabels = [layer0Label, layer1Label, layer2Label];
        objectGroups = [objectsBG, objects, objectsFG];
        tilemaps = [tilesBG, tilesCollision, tilesFG];

        FlxMouseEventManager.add(layer0Label, null, setActiveLayer.bind(_, 0), null, null, true, true, false);
        FlxMouseEventManager.add(layer1Label, null, setActiveLayer.bind(_, 1), null, null, true, true, false);
        FlxMouseEventManager.add(layer2Label, null, setActiveLayer.bind(_, 2), null, null, true, true, false);
        
        FlxMouseEventManager.add(bgIndexText, null, changeBGIndex.bind(_, 1), null, null, true, true, false, [LEFT]);
        FlxMouseEventManager.add(bgIndexText, null, changeBGIndex.bind(_, -1), null, null, true, true, false, [RIGHT]);
        
        FlxMouseEventManager.add(tilesetPickerLabel, null, changeTileset.bind(_, 1), null, null, true, true, false, [LEFT]);
        FlxMouseEventManager.add(tilesetPickerLabel, null, changeTileset.bind(_, -1), null, null, true, true, false, [RIGHT]);
        
        activeTilemap.graphic = currentTileset.graphic;

        add(background);

        add(tilesBG);
        add(objectsBG);

        add(tilesCollision);
        add(objects);
        add(tilesFG);
        add(objectsFG);
        add(tilePlacementReticle);

        add(layer0Label);
        add(layer1Label);
        add(layer2Label);

        add(bgIndexText);
        add(tilesetPickerLabel);

        add(currentTileset);       
        add(currentTileReticle); 
        add(titleText);
        super.create();
    }

    private function setActiveLayer(label:FlxText, layer:Int):Void {
        layerLabels[activeLayer].bold = false;
        activeLayer = layer;
        label.bold = true;

        tilesetPickerLabel.text = 'Tileset: ${tilesetIndices[activeLayer]}';
        changeTilePicker(tilesetIndices[activeLayer]);

        activeTilemap = tilemaps[activeLayer];
        activeTilemap.graphic = currentTileset.graphic;
        activeObjectGroup = objectGroups[activeLayer];
    }

    private function changeTilePicker(index:Int):Void {
        currentTileset.loadGraphic(Assets.getTileset(tilesetIndices[activeLayer]));
    }

    private function changeBGIndex(label:FlxText, offset:Int):Void {
        bgIndex += offset;
        if (bgIndex < 0) {
            bgIndex = 0;
            return;
        }

        if (bgIndex >= Assets.numBackgrounds()) {
            bgIndex = Assets.numBackgrounds() - 1;
            return; 
        }


        bgIndexText.text = 'BG: ${bgIndex}';      
        background.loadGraphic(Assets.getBackground(bgIndex));
    }

    private function changeTileset(label:FlxText, offset:Int):Void {
        tilesetIndices[activeLayer] += offset;
        if (tilesetIndices[activeLayer] < 0) {
            tilesetIndices[activeLayer] = 0;
            return;
        }
        if (tilesetIndices[activeLayer] >= Assets.numTilesets()) {
            tilesetIndices[activeLayer] = Assets.numTilesets() - 1;
            return;
        }

        tilesetPickerLabel.text = 'Tileset: ${tilesetIndices[activeLayer]}';
        
        tilemaps[activeLayer].graphic = FlxGraphic.fromAssetKey(Assets.getTileset(tilesetIndices[activeLayer]));
        changeTilePicker(tilesetIndices[activeLayer]);
    }

    private function saveLevel():Void {
        var bgTiles:Array<Int> = tilesBG.getData();
        var collisionTiles:Array<Int> = tilesCollision.getData();
        var fgTiles:Array<Int> = tilesFG.getData();

        var levelData = {bgTiles: bgTiles, colTiles: collisionTiles, fgTiles: fgTiles};
        var levelString:String = haxe.Json.stringify(levelData);
        trace(levelString);
    }

    private function pickTile():Void {
        if (levelRect.containsPoint(FlxG.mouse.getPosition())) {
            var tileX = Std.int((FlxG.mouse.x - activeTilemap.x) / 24);
            var tileY = Std.int((FlxG.mouse.y - activeTilemap.y) / 24);

            currentTileIndex = activeTilemap.getTile(tileX, tileY);

            currentTileReticle.x = currentTileset.x + (currentTileIndex % Const.TILESET_WIDTH) * 24 - 1;
            currentTileReticle.y = currentTileset.y + Std.int(currentTileIndex / Const.TILESET_WIDTH) * 24 - 1;
        }
    }

    private function moveSelectedTile(dx:Int, dy:Int):Void {
        var tX:Int = currentTileIndex % Const.TILESET_WIDTH;
        var tY:Int = Std.int(currentTileIndex / Const.TILESET_WIDTH);

        tX += dx;

        if (dy == -1) {
            
        }
    }

    private function processKeyboard():Void {
        if (FlxG.keys.justPressed.F5) {
            FlxG.switchState(new PlayState());
        }
        if (FlxG.keys.justPressed.ESCAPE) {
            System.exit(0);
        }
        if (FlxG.keys.pressed.CONTROL && FlxG.keys.justPressed.S) {
            saveLevel();
        }

        if (FlxG.keys.justPressed.A) {
            moveSelectedTile(-1, 0);
        }
        if (FlxG.keys.justPressed.D) {
            moveSelectedTile(1, 0);
        }
        if (FlxG.keys.justPressed.W) {
            moveSelectedTile(0, -1);
        }
        if (FlxG.keys.justPressed.S) {
            moveSelectedTile(0, 1);
        }

    }

    override public function update(elapsed:Float):Void {

        var mousePos = FlxG.mouse.getPosition();
        if (FlxG.mouse.pressed) {
            if (levelRect.containsPoint(mousePos)) {
                var tileX:Int = Std.int((FlxG.mouse.x - activeTilemap.x) / 24);
                var tileY:Int = Std.int((FlxG.mouse.y - activeTilemap.y) / 24);

                activeTilemap.setTile(tileX, tileY, currentTileIndex, true);
            }
            if (currentTileset.overlapsPoint(mousePos)) {
                var tileX:Int = Std.int((FlxG.mouse.x - currentTileset.x) / 24);
                var tileY:Int = Std.int((FlxG.mouse.y - currentTileset.y) / 24);

                currentTileIndex = tileY * Const.TILESET_WIDTH + tileX;

                currentTileReticle.x = currentTileset.x + tileX * 24 - 1;
                currentTileReticle.y = currentTileset.y + tileY * 24 - 1;
            }
        }
        if (FlxG.mouse.justPressedRight) {
            pickTile();
        }

        processKeyboard();

        tilePlacementReticle.visible = levelRect.containsPoint(FlxG.mouse.getPosition());
        tilePlacementReticle.x = Std.int(FlxG.mouse.x / 24) * 24 - 1;
        tilePlacementReticle.y = Std.int(FlxG.mouse.y / 24) * 24 - 1;
      
        super.update(elapsed);
    }
}