//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRMutableStateProtocol-Protocol.h>

@class NSMutableSet;
@protocol NRMutableStateParentDelegate;

@interface NRMutableStateBase : NSObject <NRMutableStateProtocol>
{
    NSMutableSet *_observers;
//     struct os_unfair_lock_s _lock;
    id <NRMutableStateParentDelegate> _parentDelegate;
}

+ (id)classTypes;
+ (id)enclosedClassTypes;
+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak id <NRMutableStateParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (id)addObserverQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (void)notifyObserversWithDiff:(id)arg1;
- (void)notifyParentWithDiff:(id)arg1;
- (id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;
- (id)applyDiff:(id)arg1;
- (id)observers;
- (id)init;

@end

