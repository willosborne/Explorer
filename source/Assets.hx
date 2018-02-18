package;

import flixel.FlxSprite;
import sys.FileSystem;
import flixel.graphics.FlxGraphic;

class Assets {
    private static var backgrounds:Array<String>;
    private static var tilesets:Array<String>;

    private static var backgroundPath:String = 'assets/images/backgrounds';
    private static var tilesetPath:String = 'assets/images/tilesets';

    public static function numTilesets():Int {
        return tilesets.length;
    }

    public static function numBackgrounds():Int {
        return backgrounds.length;
    }

    public static function getTileset(index:Int):String {
        return tilesets[index];
    }

    public static function getBackground(index:Int):String {
        return backgrounds[index];
    }

    public static function loadAssets():Void {
        var backgroundFiles:Array<String> = [for (path in FileSystem.readDirectory(backgroundPath)) '${backgroundPath}/${path}'];
        trace(backgroundFiles);
        var tilesetFiles:Array<String> = [for (path in FileSystem.readDirectory(tilesetPath)) '${tilesetPath}/${path}'];

        backgrounds = backgroundFiles;
        tilesets = tilesetFiles;
    }
}