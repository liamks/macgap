#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@class Sound;
@class Dock;
@class Growl;
@class Path;
@class App;
@class Window;
@class File;

@class WindowController;

@interface WebViewDelegate : NSObject {
	Sound* sound;
    Dock* dock;
    Growl* growl;
    Path* path;
    App* app;
    Window* window;
    File* file;
}



@property (nonatomic, retain) Sound* sound;
@property (nonatomic, retain) Dock* dock;
@property (nonatomic, retain) Growl* growl;
@property (nonatomic, retain) Path* path;
@property (nonatomic, retain) App* app;
@property (nonatomic, retain) Window* window;
@property (nonatomic, retain) File* file;

@property (nonatomic, retain) WindowController *requestedWindow;

@end
