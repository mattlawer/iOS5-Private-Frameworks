/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSLock, NSMutableArray, NSMutableString, NSString, SCROBrailleEventDispatcher, SCROBrailleLine;

@interface SCROBrailleDisplay : NSObject
{
    NSLock *_contentLock;
    id <SCROBrailleDisplayDelegate> _delegate;
    id <SCROBrailleDriverProtocol> _brailleDriver;
    id <SCROIOElementProtocol> _ioElement;
    SCROBrailleLine *_brailleLine;
    int _contractionMode;
    BOOL _showEightDot;
    BOOL _shouldBatchUpdates;
    BOOL _needsUpdating;
    NSString *_driverIdentifier;
    NSString *_driverModelIdentifier;
    int _mainSize;
    int _statusSize;
    BOOL _postsKeyboardEvents;
    int _brailleInputMode;
    struct {
        NSData *realData;
        NSData *virtualData;
        NSData *aggregatedData;
        int virtualAlignment;
        int masterStatusCellIndex;
    } _status;
    SCROBrailleEventDispatcher *_eventDispatcher;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopTimer *_inputEventTimer;
    struct __CFRunLoopTimer *_blinkerEventTimer;
    BOOL _blinkingEnabled;
    BOOL _inputEnabled;
    struct {
        double quietSince;
        double busySince;
        double nextWillMemorizeNotificationTime;
        double memorizeNextKeyImmediatelyTimeout;
        char prepareToMemorizeNextKey;
        char requestPrepareToMemorizeNextKey;
        char memorizeNextKeyImmediately;
        char willMemorizeNow;
        char isQuiet;
        char newDown;
        struct __CFArray *currentChord;
        struct __CFSet *downKeys;
        unsigned int routerEvent;
        int routerIndex;
        int routerToken;
        id appToken;
        int routerLocation;
        char currentBrailleChordContainsSpacebar;
        char spacebarIsDown;
        char skipBrailleKeyboardKeyTranslation;
        struct __CFArray *currentBrailleChord;
        struct __CFSet *downBrailleDots;
        unsigned int currentBrailleModifiers;
        unsigned int downBrailleModifiers;
        NSMutableString *brailleString;
        NSMutableArray *brailleStringModifiers;
        double lastBrailleChordPosted;
        double brailleCharExponentialMovingAverage;
        double brailleTranslationTimeout;
    } _input;
    BOOL _isValid;
    BOOL _delegateWantsDisplayCallback;
    BOOL _delegateWantsPanningCallbacks;
}

+ (BOOL)brailleDriverClassIsValid:(Class)arg1;
+ (id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
- (id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4;
- (void)_delayedDisplayLoad;
- (void)_runThread;
- (void)dealloc;
- (void)invalidate;
- (BOOL)isValid;
- (BOOL)isLoaded;
- (id)driverIdentifier;
- (id)driverModelIdentifier;
- (id)lineDescriptor;
- (id)ioElement;
- (long)token;
- (int)mainSize;
- (int)statusSize;
- (id)configuration;
- (void)beginUpdates;
- (void)endUpdates;
- (void)setBrailleFormatter:(id)arg1;
- (id)realStatus;
- (id)virtualStatus;
- (void)setAggregatedStatus:(id)arg1;
- (id)aggregatedStatus;
- (void)setVirtualStatusAlignment:(int)arg1;
- (int)virtualStatusAlignment;
- (void)setMasterStatusCellIndex:(long)arg1;
- (long)masterStatusCellIndex;
@property(nonatomic) BOOL delegateWantsDisplayCallback; // @synthesize delegateWantsDisplayCallback=_delegateWantsDisplayCallback;
- (void)setStatusAttributesWithMasterCellIndex:(long)arg1 virtualAlignment:(int)arg2;
- (void)simulateKeypress:(id)arg1;
- (void)panLeft;
- (void)panRight;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2;
- (int)tokenForRouterIndex:(int)arg1 location:(int *)arg2 appToken:(id *)arg3;
- (void)handleEvent:(id)arg1;
- (void)_unloadHandler;
- (id)_statusStringWithDictionary:(id)arg1;
- (void)_setBrailleFormatterHandler:(id)arg1;
- (void)_statusDisplayHandler:(id)arg1;
- (void)_aggregatedStatusHandler:(id)arg1;
- (void)_setDelegateWantsDisplayCallbackHandler:(id)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_bulkStatusAttributesHandler:(id)arg1;
- (void)_setBatchUpdates:(id)arg1;
- (void)_updateDisplay;
- (void)_configurationChangeHandler;
- (void)_translateBrailleStringAndPostEvent;
- (void)_appendTranslatedBrailleStringEventsToArray:(struct __CFArray **)arg1;
- (void)_processKeyEvents:(id)arg1;
- (void)_panHandler:(id)arg1;
- (BOOL)_hasPressedBrailleKeys;
- (BOOL)_isMemorizingKeys;
- (void)_stopMemorization;
- (BOOL)_hasKeyChord;
- (BOOL)_hasBrailleChord;
- (id)_newBrailleKeyForCurrentBrailleChord;
- (id)_newBrailleKeyForCurrentKeyChord;
- (void)_inputEventHandler;
- (void)_blinkerEventHandler;
- (void)_unloadNotification:(id)arg1;
- (void)_delayedUnloadNotification;
- (void)_configurationChangeNotification:(id)arg1;
- (void)_delayedConfigurationChangeNotification;
- (void)_sleepNotification:(id)arg1;
- (void)_delayedSleepNotification:(id)arg1;
@property(nonatomic) BOOL delegateWantsPanningCallbacks; // @synthesize delegateWantsPanningCallbacks=_delegateWantsPanningCallbacks;

@end

