/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMUAddressRange.h>

@interface VMURangeValue : VMUAddressRange
{
    int _value;
}

+ (id)rangeValueWithRange:(struct _VMURange)arg1 value:(int)arg2;
- (id)initWithRange:(struct _VMURange)arg1 value:(int)arg2;
- (struct _VMURange)addressRange;
- (int)value;
- (int)compare:(id)arg1;
- (id)description;

@end

