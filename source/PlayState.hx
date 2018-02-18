package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.tile.FlxTilemap;
import flixel.group.FlxGroup;
import flixel.system.scaleModes.StageSizeScaleMode;

class PlayState extends FlxState
{
	private static inline var TILE_WIDTH = 24;
	private static inline var TILE_HEIGHT = 24;

	private var tilesBG:FlxTilemap;
	private var tilesFG:FlxTilemap;
	private var tilesCollision:FlxTilemap;

	private var objectsBG:FlxGroup;
	private var objects:FlxGroup;
	private var objectsFG:FlxGroup;

	
	

	override public function create():Void
	{
		FlxG.scaleMode = new StageSizeScaleMode();
		// FlxG.mouse.visible = true;
		

		FlxG.resizeWindow(600, 240);
		FlxG.resizeGame(600, 240);
		
		tilesBG = new FlxTilemap();
		tilesFG = new FlxTilemap();
		tilesCollision = new FlxTilemap();

		objectsBG = new FlxGroup();
		objects = new FlxGroup();
		objectsFG = new FlxGroup();

		add(tilesBG);
		add(objectsBG);
		add(tilesCollision);
		add(objects);
		add(tilesFG);
		add(objectsFG);


		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		if (FlxG.keys.justPressed.F6) {
			FlxG.switchState(new EditorState());
		}

		super.update(elapsed);
	}
}
