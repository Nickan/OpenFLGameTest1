package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/bootstrap/progress/Background.png", __ASSET__assets_bootstrap_progress_background_png);
		type.set ("assets/bootstrap/progress/Background.png", AssetType.IMAGE);
		className.set ("assets/bootstrap/progress/Fill.png", __ASSET__assets_bootstrap_progress_fill_png);
		type.set ("assets/bootstrap/progress/Fill.png", AssetType.IMAGE);
		className.set ("assets/bootstrap/progress/Left.png", __ASSET__assets_bootstrap_progress_left_png);
		type.set ("assets/bootstrap/progress/Left.png", AssetType.IMAGE);
		className.set ("assets/bootstrap/progress/Right.png", __ASSET__assets_bootstrap_progress_right_png);
		type.set ("assets/bootstrap/progress/Right.png", AssetType.IMAGE);
		className.set ("assets/main/aircraft_2c.png", __ASSET__assets_main_aircraft_2c_png);
		type.set ("assets/main/aircraft_2c.png", AssetType.IMAGE);
		className.set ("assets/main/Bullet.png", __ASSET__assets_main_bullet_png);
		type.set ("assets/main/Bullet.png", AssetType.IMAGE);
		className.set ("assets/main/buttons/Home.png", __ASSET__assets_main_buttons_home_png);
		type.set ("assets/main/buttons/Home.png", AssetType.IMAGE);
		className.set ("assets/main/buttons/Pause.png", __ASSET__assets_main_buttons_pause_png);
		type.set ("assets/main/buttons/Pause.png", AssetType.IMAGE);
		className.set ("assets/main/buttons/Play.png", __ASSET__assets_main_buttons_play_png);
		type.set ("assets/main/buttons/Play.png", AssetType.IMAGE);
		className.set ("assets/main/buttons/PlayBig.png", __ASSET__assets_main_buttons_playbig_png);
		type.set ("assets/main/buttons/PlayBig.png", AssetType.IMAGE);
		className.set ("assets/main/buttons/Replay.png", __ASSET__assets_main_buttons_replay_png);
		type.set ("assets/main/buttons/Replay.png", AssetType.IMAGE);
		className.set ("assets/main/buttons/Tweet.png", __ASSET__assets_main_buttons_tweet_png);
		type.set ("assets/main/buttons/Tweet.png", AssetType.IMAGE);
		className.set ("assets/main/buttons/Volume.png", __ASSET__assets_main_buttons_volume_png);
		type.set ("assets/main/buttons/Volume.png", AssetType.IMAGE);
		className.set ("assets/main/Cloud.png", __ASSET__assets_main_cloud_png);
		type.set ("assets/main/Cloud.png", AssetType.IMAGE);
		className.set ("assets/main/Explosion.png", __ASSET__assets_main_explosion_png);
		type.set ("assets/main/Explosion.png", AssetType.IMAGE);
		className.set ("assets/main/fonts/Dark.fnt", __ASSET__assets_main_fonts_dark_fnt);
		type.set ("assets/main/fonts/Dark.fnt", AssetType.TEXT);
		className.set ("assets/main/fonts/Dark.png", __ASSET__assets_main_fonts_dark_png);
		type.set ("assets/main/fonts/Dark.png", AssetType.IMAGE);
		className.set ("assets/main/fonts/Light.fnt", __ASSET__assets_main_fonts_light_fnt);
		type.set ("assets/main/fonts/Light.fnt", AssetType.TEXT);
		className.set ("assets/main/fonts/Light.png", __ASSET__assets_main_fonts_light_png);
		type.set ("assets/main/fonts/Light.png", AssetType.IMAGE);
		className.set ("assets/main/planes/aircraft_1.png", __ASSET__assets_main_planes_aircraft_1_png);
		type.set ("assets/main/planes/aircraft_1.png", AssetType.IMAGE);
		className.set ("assets/main/planes/aircraft_1c_hit.png", __ASSET__assets_main_planes_aircraft_1c_hit_png);
		type.set ("assets/main/planes/aircraft_1c_hit.png", AssetType.IMAGE);
		className.set ("assets/main/planes/aircraft_1e_hit.png", __ASSET__assets_main_planes_aircraft_1e_hit_png);
		type.set ("assets/main/planes/aircraft_1e_hit.png", AssetType.IMAGE);
		className.set ("assets/main/planes/aircraft_2.png", __ASSET__assets_main_planes_aircraft_2_png);
		type.set ("assets/main/planes/aircraft_2.png", AssetType.IMAGE);
		className.set ("assets/main/planes/aircraft_3.png", __ASSET__assets_main_planes_aircraft_3_png);
		type.set ("assets/main/planes/aircraft_3.png", AssetType.IMAGE);
		className.set ("assets/main/planes/aircraft_3c_hit.png", __ASSET__assets_main_planes_aircraft_3c_hit_png);
		type.set ("assets/main/planes/aircraft_3c_hit.png", AssetType.IMAGE);
		className.set ("assets/main/planes/aircraft_3_hit.png", __ASSET__assets_main_planes_aircraft_3_hit_png);
		type.set ("assets/main/planes/aircraft_3_hit.png", AssetType.IMAGE);
		className.set ("assets/main/sounds/Coin.mp3", __ASSET__assets_main_sounds_coin_mp3);
		type.set ("assets/main/sounds/Coin.mp3", AssetType.MUSIC);
		className.set ("assets/main/sounds/Coin.ogg", __ASSET__assets_main_sounds_coin_ogg);
		type.set ("assets/main/sounds/Coin.ogg", AssetType.SOUND);
		className.set ("assets/main/sounds/Explode.mp3", __ASSET__assets_main_sounds_explode_mp3);
		type.set ("assets/main/sounds/Explode.mp3", AssetType.MUSIC);
		className.set ("assets/main/sounds/Explode.ogg", __ASSET__assets_main_sounds_explode_ogg);
		type.set ("assets/main/sounds/Explode.ogg", AssetType.SOUND);
		className.set ("assets/main/sounds/Hurt.mp3", __ASSET__assets_main_sounds_hurt_mp3);
		type.set ("assets/main/sounds/Hurt.mp3", AssetType.MUSIC);
		className.set ("assets/main/sounds/Hurt.ogg", __ASSET__assets_main_sounds_hurt_ogg);
		type.set ("assets/main/sounds/Hurt.ogg", AssetType.SOUND);
		className.set ("assets/main/Water.png", __ASSET__assets_main_water_png);
		type.set ("assets/main/Water.png", AssetType.IMAGE);
		className.set ("assets/openfl.png", __ASSET__assets_openfl_png);
		type.set ("assets/openfl.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/bootstrap/progress/Background.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/bootstrap/progress/Fill.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/bootstrap/progress/Left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/bootstrap/progress/Right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/aircraft_2c.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/Bullet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/buttons/Home.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/buttons/Pause.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/buttons/Play.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/buttons/PlayBig.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/buttons/Replay.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/buttons/Tweet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/buttons/Volume.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/Cloud.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/Explosion.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/fonts/Dark.fnt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/main/fonts/Dark.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/fonts/Light.fnt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/main/fonts/Light.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/planes/aircraft_1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/planes/aircraft_1c_hit.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/planes/aircraft_1e_hit.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/planes/aircraft_2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/planes/aircraft_3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/planes/aircraft_3c_hit.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/planes/aircraft_3_hit.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/main/sounds/Coin.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/main/sounds/Coin.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/main/sounds/Explode.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/main/sounds/Explode.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/main/sounds/Hurt.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/main/sounds/Hurt.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/main/Water.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/openfl.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = ApplicationMain.config.assetsPrefix;
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if openfl
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/bootstrap/progress/Background.png", __ASSET__assets_bootstrap_progress_background_png);
		type.set ("assets/bootstrap/progress/Background.png", AssetType.IMAGE);
		
		className.set ("assets/bootstrap/progress/Fill.png", __ASSET__assets_bootstrap_progress_fill_png);
		type.set ("assets/bootstrap/progress/Fill.png", AssetType.IMAGE);
		
		className.set ("assets/bootstrap/progress/Left.png", __ASSET__assets_bootstrap_progress_left_png);
		type.set ("assets/bootstrap/progress/Left.png", AssetType.IMAGE);
		
		className.set ("assets/bootstrap/progress/Right.png", __ASSET__assets_bootstrap_progress_right_png);
		type.set ("assets/bootstrap/progress/Right.png", AssetType.IMAGE);
		
		className.set ("assets/main/aircraft_2c.png", __ASSET__assets_main_aircraft_2c_png);
		type.set ("assets/main/aircraft_2c.png", AssetType.IMAGE);
		
		className.set ("assets/main/Bullet.png", __ASSET__assets_main_bullet_png);
		type.set ("assets/main/Bullet.png", AssetType.IMAGE);
		
		className.set ("assets/main/buttons/Home.png", __ASSET__assets_main_buttons_home_png);
		type.set ("assets/main/buttons/Home.png", AssetType.IMAGE);
		
		className.set ("assets/main/buttons/Pause.png", __ASSET__assets_main_buttons_pause_png);
		type.set ("assets/main/buttons/Pause.png", AssetType.IMAGE);
		
		className.set ("assets/main/buttons/Play.png", __ASSET__assets_main_buttons_play_png);
		type.set ("assets/main/buttons/Play.png", AssetType.IMAGE);
		
		className.set ("assets/main/buttons/PlayBig.png", __ASSET__assets_main_buttons_playbig_png);
		type.set ("assets/main/buttons/PlayBig.png", AssetType.IMAGE);
		
		className.set ("assets/main/buttons/Replay.png", __ASSET__assets_main_buttons_replay_png);
		type.set ("assets/main/buttons/Replay.png", AssetType.IMAGE);
		
		className.set ("assets/main/buttons/Tweet.png", __ASSET__assets_main_buttons_tweet_png);
		type.set ("assets/main/buttons/Tweet.png", AssetType.IMAGE);
		
		className.set ("assets/main/buttons/Volume.png", __ASSET__assets_main_buttons_volume_png);
		type.set ("assets/main/buttons/Volume.png", AssetType.IMAGE);
		
		className.set ("assets/main/Cloud.png", __ASSET__assets_main_cloud_png);
		type.set ("assets/main/Cloud.png", AssetType.IMAGE);
		
		className.set ("assets/main/Explosion.png", __ASSET__assets_main_explosion_png);
		type.set ("assets/main/Explosion.png", AssetType.IMAGE);
		
		className.set ("assets/main/fonts/Dark.fnt", __ASSET__assets_main_fonts_dark_fnt);
		type.set ("assets/main/fonts/Dark.fnt", AssetType.TEXT);
		
		className.set ("assets/main/fonts/Dark.png", __ASSET__assets_main_fonts_dark_png);
		type.set ("assets/main/fonts/Dark.png", AssetType.IMAGE);
		
		className.set ("assets/main/fonts/Light.fnt", __ASSET__assets_main_fonts_light_fnt);
		type.set ("assets/main/fonts/Light.fnt", AssetType.TEXT);
		
		className.set ("assets/main/fonts/Light.png", __ASSET__assets_main_fonts_light_png);
		type.set ("assets/main/fonts/Light.png", AssetType.IMAGE);
		
		className.set ("assets/main/planes/aircraft_1.png", __ASSET__assets_main_planes_aircraft_1_png);
		type.set ("assets/main/planes/aircraft_1.png", AssetType.IMAGE);
		
		className.set ("assets/main/planes/aircraft_1c_hit.png", __ASSET__assets_main_planes_aircraft_1c_hit_png);
		type.set ("assets/main/planes/aircraft_1c_hit.png", AssetType.IMAGE);
		
		className.set ("assets/main/planes/aircraft_1e_hit.png", __ASSET__assets_main_planes_aircraft_1e_hit_png);
		type.set ("assets/main/planes/aircraft_1e_hit.png", AssetType.IMAGE);
		
		className.set ("assets/main/planes/aircraft_2.png", __ASSET__assets_main_planes_aircraft_2_png);
		type.set ("assets/main/planes/aircraft_2.png", AssetType.IMAGE);
		
		className.set ("assets/main/planes/aircraft_3.png", __ASSET__assets_main_planes_aircraft_3_png);
		type.set ("assets/main/planes/aircraft_3.png", AssetType.IMAGE);
		
		className.set ("assets/main/planes/aircraft_3c_hit.png", __ASSET__assets_main_planes_aircraft_3c_hit_png);
		type.set ("assets/main/planes/aircraft_3c_hit.png", AssetType.IMAGE);
		
		className.set ("assets/main/planes/aircraft_3_hit.png", __ASSET__assets_main_planes_aircraft_3_hit_png);
		type.set ("assets/main/planes/aircraft_3_hit.png", AssetType.IMAGE);
		
		className.set ("assets/main/sounds/Coin.mp3", __ASSET__assets_main_sounds_coin_mp3);
		type.set ("assets/main/sounds/Coin.mp3", AssetType.MUSIC);
		
		className.set ("assets/main/sounds/Coin.ogg", __ASSET__assets_main_sounds_coin_ogg);
		type.set ("assets/main/sounds/Coin.ogg", AssetType.SOUND);
		
		className.set ("assets/main/sounds/Explode.mp3", __ASSET__assets_main_sounds_explode_mp3);
		type.set ("assets/main/sounds/Explode.mp3", AssetType.MUSIC);
		
		className.set ("assets/main/sounds/Explode.ogg", __ASSET__assets_main_sounds_explode_ogg);
		type.set ("assets/main/sounds/Explode.ogg", AssetType.SOUND);
		
		className.set ("assets/main/sounds/Hurt.mp3", __ASSET__assets_main_sounds_hurt_mp3);
		type.set ("assets/main/sounds/Hurt.mp3", AssetType.MUSIC);
		
		className.set ("assets/main/sounds/Hurt.ogg", __ASSET__assets_main_sounds_hurt_ogg);
		type.set ("assets/main/sounds/Hurt.ogg", AssetType.SOUND);
		
		className.set ("assets/main/Water.png", __ASSET__assets_main_water_png);
		type.set ("assets/main/Water.png", AssetType.IMAGE);
		
		className.set ("assets/openfl.png", __ASSET__assets_openfl_png);
		type.set ("assets/openfl.png", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash)
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				handler (audioBuffer);
				
			});
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			handler (getAudioBuffer (id));
			
		}
		#else
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || html5)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if html5
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_bootstrap_progress_background_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bootstrap_progress_fill_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bootstrap_progress_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bootstrap_progress_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_aircraft_2c_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_bullet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_buttons_home_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_buttons_pause_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_buttons_play_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_buttons_playbig_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_buttons_replay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_buttons_tweet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_buttons_volume_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_cloud_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_explosion_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_fonts_dark_fnt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_main_fonts_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_fonts_light_fnt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_main_fonts_light_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_planes_aircraft_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_planes_aircraft_1c_hit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_planes_aircraft_1e_hit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_planes_aircraft_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_planes_aircraft_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_planes_aircraft_3c_hit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_planes_aircraft_3_hit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_main_sounds_coin_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_main_sounds_coin_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_main_sounds_explode_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_main_sounds_explode_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_main_sounds_hurt_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_main_sounds_hurt_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_main_water_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_openfl_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5





































#else



#if (windows || mac || linux)


@:image("Assets/bootstrap/progress/Background.png") #if display private #end class __ASSET__assets_bootstrap_progress_background_png extends lime.graphics.Image {}
@:image("Assets/bootstrap/progress/Fill.png") #if display private #end class __ASSET__assets_bootstrap_progress_fill_png extends lime.graphics.Image {}
@:image("Assets/bootstrap/progress/Left.png") #if display private #end class __ASSET__assets_bootstrap_progress_left_png extends lime.graphics.Image {}
@:image("Assets/bootstrap/progress/Right.png") #if display private #end class __ASSET__assets_bootstrap_progress_right_png extends lime.graphics.Image {}
@:image("Assets/main/aircraft_2c.png") #if display private #end class __ASSET__assets_main_aircraft_2c_png extends lime.graphics.Image {}
@:image("Assets/main/Bullet.png") #if display private #end class __ASSET__assets_main_bullet_png extends lime.graphics.Image {}
@:image("Assets/main/buttons/Home.png") #if display private #end class __ASSET__assets_main_buttons_home_png extends lime.graphics.Image {}
@:image("Assets/main/buttons/Pause.png") #if display private #end class __ASSET__assets_main_buttons_pause_png extends lime.graphics.Image {}
@:image("Assets/main/buttons/Play.png") #if display private #end class __ASSET__assets_main_buttons_play_png extends lime.graphics.Image {}
@:image("Assets/main/buttons/PlayBig.png") #if display private #end class __ASSET__assets_main_buttons_playbig_png extends lime.graphics.Image {}
@:image("Assets/main/buttons/Replay.png") #if display private #end class __ASSET__assets_main_buttons_replay_png extends lime.graphics.Image {}
@:image("Assets/main/buttons/Tweet.png") #if display private #end class __ASSET__assets_main_buttons_tweet_png extends lime.graphics.Image {}
@:image("Assets/main/buttons/Volume.png") #if display private #end class __ASSET__assets_main_buttons_volume_png extends lime.graphics.Image {}
@:image("Assets/main/Cloud.png") #if display private #end class __ASSET__assets_main_cloud_png extends lime.graphics.Image {}
@:image("Assets/main/Explosion.png") #if display private #end class __ASSET__assets_main_explosion_png extends lime.graphics.Image {}
@:file("Assets/main/fonts/Dark.fnt") #if display private #end class __ASSET__assets_main_fonts_dark_fnt extends lime.utils.ByteArray {}
@:image("Assets/main/fonts/Dark.png") #if display private #end class __ASSET__assets_main_fonts_dark_png extends lime.graphics.Image {}
@:file("Assets/main/fonts/Light.fnt") #if display private #end class __ASSET__assets_main_fonts_light_fnt extends lime.utils.ByteArray {}
@:image("Assets/main/fonts/Light.png") #if display private #end class __ASSET__assets_main_fonts_light_png extends lime.graphics.Image {}
@:image("Assets/main/planes/aircraft_1.png") #if display private #end class __ASSET__assets_main_planes_aircraft_1_png extends lime.graphics.Image {}
@:image("Assets/main/planes/aircraft_1c_hit.png") #if display private #end class __ASSET__assets_main_planes_aircraft_1c_hit_png extends lime.graphics.Image {}
@:image("Assets/main/planes/aircraft_1e_hit.png") #if display private #end class __ASSET__assets_main_planes_aircraft_1e_hit_png extends lime.graphics.Image {}
@:image("Assets/main/planes/aircraft_2.png") #if display private #end class __ASSET__assets_main_planes_aircraft_2_png extends lime.graphics.Image {}
@:image("Assets/main/planes/aircraft_3.png") #if display private #end class __ASSET__assets_main_planes_aircraft_3_png extends lime.graphics.Image {}
@:image("Assets/main/planes/aircraft_3c_hit.png") #if display private #end class __ASSET__assets_main_planes_aircraft_3c_hit_png extends lime.graphics.Image {}
@:image("Assets/main/planes/aircraft_3_hit.png") #if display private #end class __ASSET__assets_main_planes_aircraft_3_hit_png extends lime.graphics.Image {}
@:file("Assets/main/sounds/Coin.mp3") #if display private #end class __ASSET__assets_main_sounds_coin_mp3 extends lime.utils.ByteArray {}
@:file("Assets/main/sounds/Coin.ogg") #if display private #end class __ASSET__assets_main_sounds_coin_ogg extends lime.utils.ByteArray {}
@:file("Assets/main/sounds/Explode.mp3") #if display private #end class __ASSET__assets_main_sounds_explode_mp3 extends lime.utils.ByteArray {}
@:file("Assets/main/sounds/Explode.ogg") #if display private #end class __ASSET__assets_main_sounds_explode_ogg extends lime.utils.ByteArray {}
@:file("Assets/main/sounds/Hurt.mp3") #if display private #end class __ASSET__assets_main_sounds_hurt_mp3 extends lime.utils.ByteArray {}
@:file("Assets/main/sounds/Hurt.ogg") #if display private #end class __ASSET__assets_main_sounds_hurt_ogg extends lime.utils.ByteArray {}
@:image("Assets/main/Water.png") #if display private #end class __ASSET__assets_main_water_png extends lime.graphics.Image {}
@:image("Assets/openfl.png") #if display private #end class __ASSET__assets_openfl_png extends lime.graphics.Image {}



#end

#if openfl

#end

#end
#end

