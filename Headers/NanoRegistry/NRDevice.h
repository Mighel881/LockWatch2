//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NRRegistry, NSMutableArray, NSMutableDictionary, NSPointerArray, NSUUID;

@interface NRDevice : NSObject <NSSecureCoding>
{
    NRDevice *_me;
//     struct os_unfair_lock_s _lock;
    NSUUID *_pairingID;
    NRRegistry *_registry;
    NSMutableDictionary *_oldPropertiesForChangeNotifications;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_observers;
    NSPointerArray *_promiscuousObservers;
    NSMutableDictionary *_changeBlocks;
    NSMutableArray *_promiscuousChangeBlocks;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *promiscuousChangeBlocks; // @synthesize promiscuousChangeBlocks=_promiscuousChangeBlocks;
@property(retain, nonatomic) NSMutableDictionary *changeBlocks; // @synthesize changeBlocks=_changeBlocks;
@property(retain, nonatomic) NSPointerArray *promiscuousObservers; // @synthesize promiscuousObservers=_promiscuousObservers;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSMutableDictionary *oldPropertiesForChangeNotifications; // @synthesize oldPropertiesForChangeNotifications=_oldPropertiesForChangeNotifications;
@property(retain, nonatomic) NRRegistry *registry; // @synthesize registry=_registry;
@property(retain, nonatomic) NSUUID *pairingID; // @synthesize pairingID=_pairingID;
// - (void).cxx_destruct;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)dealloc;
- (void)queueUnregisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (void)unregisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (void)queueRegisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (void)registerForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (id)propertyNames;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (void)postNotification:(id)arg1 withUserInfo:(id)arg2;
- (void)_fireChangeNotificationsForDiff:(id)arg1 secureProperties:(id)arg2 notify:(BOOL)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (id)description;
- (void)invalidate;
- (void)_notifySecurePropertiesWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)_updateSelfRetain;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithRegistry:(id)arg1 diff:(id)arg2 pairingID:(id)arg3 notify:(BOOL)arg4;
- (id)init;
- (BOOL)migrationConfirmed;
- (id)migrationError;
- (BOOL)archived;
- (BOOL)canMigrate;
- (BOOL)supportsCapability:(id)arg1;

@end

