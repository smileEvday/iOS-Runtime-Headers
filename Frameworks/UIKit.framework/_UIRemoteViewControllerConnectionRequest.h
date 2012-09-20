/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _UIAsyncInvocation, _UIViewServiceInterface, XPCMachSendRight, NSObject<OS_dispatch_queue>, NSError, NSString, _UIViewServiceXPCProxy, NSArray;

@interface _UIRemoteViewControllerConnectionRequest : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSString *_viewServiceBundleIdentifier;
    NSString *_viewControllerClassName;
    BOOL _propagateAppearanceCustomizations;
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;
    struct { 
        _UIViewServiceInterface *interface; 
        _UIViewServiceXPCProxy *viewControllerOperatorProxy; 
        _UIViewServiceXPCProxy *serviceViewControllerProxy; 
        _UIViewServiceXPCProxy *textEffectsOperatorProxy; 
        unsigned int hostedWindowContextID; 
        NSArray *serviceViewControllerSupportedInterfaceOrientations; 
        XPCMachSendRight *serviceAccessibilityServerPortWrapper; 
        struct CGAffineTransform { 
            float a; 
            float b; 
            float c; 
            float d; 
            float tx; 
            float ty; 
        } serviceRootLayerTransform; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } serviceRootLayerFrame; 
        struct CGAffineTransform { 
            float a; 
            float b; 
            float c; 
            float d; 
            float tx; 
            float ty; 
        } textEffectsRootLayerTransform; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } textEffectsRootLayerFrame; 
        unsigned int textEffectsWindowContextID; 
        unsigned int textEffectsWindowAboveStatusBarContextID; 
    } _connectionInfo;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelledOrComplete;
    NSError *_error;
    _UIAsyncInvocation *_requestCancellationInvocation;
}

+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 propagateAppearanceCustomizations:(BOOL)arg3 connectionHandler:(id)arg4;

- (void)dealloc;
- (void)_didFinishEstablishingConnection;
- (void)_connectToServiceViewController;
- (void)_sendServiceTextEffectsRequest;
- (void)_connectToTextEffectsOperator;
- (void)_sendServiceViewControllerRequest;
- (void)_connectToViewControllerOperator;
- (id)_cancelWithError:(id)arg1;
- (void)_connectToViewService;
- (void)_cancelUnconditionallyThen:(id)arg1;

@end