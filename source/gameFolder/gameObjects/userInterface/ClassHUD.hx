package gameFolder.gameObjects.userInterface;

import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import gameFolder.meta.state.PlayState;

class ClassHUD extends FlxTypedGroup<FlxBasic>
{
	// set up variables and stuff here
	var infoBar:FlxText; // small side bar like kade engine that tells you engine info

	// eep
	public function new()
	{
		super();
		// call the initializations and stuffs
		var dif:Int = PlayState.storyDifficulty;
		var difficultyString:String;
		switch (dif)
		{
			case 0:
				difficultyString = "Easy";
			case 1:
				difficultyString = "Normal";
			case 2:
				difficultyString = "Hard";
			default:
				difficultyString = "null";
		}

		// small info bar, kinda like the kade engine watermark
		// based on scoretxt which I will set up as well
		var infoDisplay:String = PlayState.SONG.song + ' - ' + difficultyString + " - Forever Engine";

		infoBar = new FlxText(5, FlxG.height - 30, 0, infoDisplay, 20);
		infoBar.setFormat(Paths.font("vcr.ttf"), 16, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		infoBar.scrollFactor.set();
		add(infoBar);
	}

	public function hudUpdate()
	{
		// hud update information
	}
}
