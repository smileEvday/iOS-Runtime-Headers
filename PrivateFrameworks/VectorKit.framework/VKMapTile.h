/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKRasterTile, VKTile;

@interface VKMapTile : VKTile <NSCopying> {
    struct { 
        float x0; 
        float x1; 
        float y0; 
        float y1; 
    struct shared_ptr<vk::InfoMapTile> { 
        struct InfoMapTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _infoMapTile;
    } _localBounds[29];
    float _maximumStyleZ;
    BOOL _needsRasterization;
    VKRasterTile *_rasterized;
    double _stateDates[29];
    id _stateMetas[29];
    unsigned int _states[29];
    VKTile *_tiles[29];
}

@property struct shared_ptr<vk::InfoMapTile> { struct InfoMapTile {} *x1; struct __shared_weak_count {} *x2; } infoMapTile;
@property(readonly) float maximumStyleZ;
@property BOOL needsRasterization;
@property(retain) VKRasterTile * rasterized;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setTile:(id)arg1 state:(unsigned int)arg2 metadata:(id)arg3 forLayer:(unsigned int)arg4 timestamp:(double)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (struct shared_ptr<vk::InfoMapTile> { struct InfoMapTile {} *x1; struct __shared_weak_count {} *x2; })infoMapTile;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (struct { float x1; float x2; float x3; float x4; })localBoundsForLayer:(unsigned int)arg1;
- (float)maximumStyleZ;
- (BOOL)needsRasterization;
- (id)rasterized;
- (void)setInfoMapTile:(struct shared_ptr<vk::InfoMapTile> { struct InfoMapTile {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setNeedsRasterization:(BOOL)arg1;
- (void)setRasterized:(id)arg1;
- (void)setTile:(id)arg1 state:(unsigned int)arg2 metadata:(id)arg3 forLayer:(unsigned int)arg4;
- (id)tileForLayer:(unsigned int)arg1;
- (unsigned int)tileStateForLayer:(unsigned int)arg1;
- (void)updateViewDependentStateWithContext:(id)arg1;

@end