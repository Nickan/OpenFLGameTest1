package;

import openfl.display.Sprite;

class Main extends Sprite {
	
	var _gameSprite:GameSprite;

	public function new () {
		
		super ();
		_gameSprite = new GameSprite();
		addChild(_gameSprite);
		
		_gameSprite.addEventListener(GameEvent.RESTART, onRestart);
	}
	
	private function onRestart(e:GameEvent):Void 
	{
		_gameSprite.removeEventListener(GameEvent.RESTART, onRestart);
		removeChild(_gameSprite);
		_gameSprite = null;
		
		
		_gameSprite = new GameSprite();
		addChild(_gameSprite);
		_gameSprite.addEventListener(GameEvent.RESTART, onRestart);
	}
	
}