/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BBSectionSubtypeParameters, NSMutableDictionary;

@interface BBSectionParameters : NSObject
{
    BOOL _showsSubtitle;
    unsigned int _messageNumberOfLines;
    BOOL _usesVariableLayout;
    BOOL _orderSectionUsingRecencyDate;
    BOOL _showsDateInFloatingLockScreenAlert;
    BBSectionSubtypeParameters *_defaultSubtypeParameters;
    NSMutableDictionary *_allSubtypeParameters;
}

@property(retain, nonatomic) NSMutableDictionary *allSubtypeParameters; // @synthesize allSubtypeParameters=_allSubtypeParameters;
@property(retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters; // @synthesize defaultSubtypeParameters=_defaultSubtypeParameters;
@property(nonatomic) BOOL showsDateInFloatingLockScreenAlert; // @synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert;
@property(nonatomic) BOOL orderSectionUsingRecencyDate; // @synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate;
@property(nonatomic) BOOL usesVariableLayout; // @synthesize usesVariableLayout=_usesVariableLayout;
@property(nonatomic) unsigned int messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property(nonatomic) BOOL showsSubtitle; // @synthesize showsSubtitle=_showsSubtitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parametersForSubtype:(int)arg1;
- (void)dealloc;
- (id)init;

@end
