/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSObject<OS_dispatch_queue>;

@interface MPAVBoundaryTimeObserverInfo : NSObject {
    id _block;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_times;
}

@property(copy,readonly) id block;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) NSArray * times;

- (void).cxx_destruct;
- (id)block;
- (id)initWithTimes:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (id)queue;
- (id)times;

@end
