/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCalendarDate : NSDate {
    NSString *_formatString;
    void *_reserved;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    unsigned int refCount;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)calendarDate;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
+ (id)dateWithYear:(int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5 second:(unsigned int)arg6 timeZone:(id)arg7;
+ (id)distantFuture;
+ (id)distantPast;

- (id)addTimeInterval:(double)arg1;
- (id)calendarFormat;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingYears:(int)arg1 months:(int)arg2 days:(int)arg3 hours:(int)arg4 minutes:(int)arg5 seconds:(int)arg6;
- (int)dayOfCommonEra;
- (int)dayOfMonth;
- (int)dayOfWeek;
- (int)dayOfYear;
- (void)dealloc;
- (id)description;
- (id)descriptionWithCalendarFormat:(id)arg1;
- (id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)hourOfDay;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)initWithYear:(int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5 second:(unsigned int)arg6 timeZone:(id)arg7;
- (int)microsecondOfSecond;
- (int)minuteOfHour;
- (int)monthOfYear;
- (oneway void)release;
- (id)replacementObjectForPortCoder:(id)arg1;
- (int)secondOfMinute;
- (void)setCalendarFormat:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)timeZone;
- (id)timeZoneDetail;
- (int)yearOfCommonEra;
- (void)years:(int*)arg1 months:(int*)arg2 days:(int*)arg3 hours:(int*)arg4 minutes:(int*)arg5 seconds:(int*)arg6 sinceDate:(id)arg7;

// Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase

- (id)ekmsuidGMTDateToDateInTimeZone:(id)arg1;
- (id)ekmsuidStringForYearMonthDay;

@end
