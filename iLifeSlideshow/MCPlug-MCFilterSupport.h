/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCPlug.h>

#import "MCFilterSupport-Protocol.h"

@class NSArray, NSSet;

@interface MCPlug (MCFilterSupport) <MCFilterSupport>
- (void)initFiltersWithImprints:(id)arg1;
- (void)demolishFilters;
- (id)imprintsForFilters;
@property(readonly) NSArray *orderedFilters;
@property(readonly) NSSet *filters;
- (unsigned int)countOfFilters;
- (id)filterAtIndex:(unsigned int)arg1;
- (id)addFilterWithFilterID:(id)arg1;
- (id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeFiltersAtIndices:(id)arg1;
- (void)removeAllFilters;
- (void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned int)arg2;
- (void)observeFilter:(id)arg1;
- (void)unobserveFilter:(id)arg1;
@end

