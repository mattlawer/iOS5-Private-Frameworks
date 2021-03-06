/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/ODIHierarchy.h>

@interface ODIHierarchy (Private)
- (id)initWithType:(int)arg1 state:(id)arg2;
- (void)dealloc;
- (id)infoForNode:(id)arg1;
- (void)createInfoForNode:(id)arg1 depth:(int)arg2;
- (struct ODIHRangeVector *)mapRangesForNode:(id)arg1;
- (void)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector *)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3;
- (struct CGRect)boundsOfNode:(id)arg1;
- (void)mapNode:(id)arg1;
- (void)map;
@end

