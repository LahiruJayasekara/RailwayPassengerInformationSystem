

#ifndef _RTC_ROUTINES_H_
#define _RTC_ROUTINES_H_

#define		SECONDS			rtc_register[0]
#define		MINUTES			rtc_register[1]
#define		HOURS			rtc_register[2]
#define		DAY    			rtc_register[3]
#define		DATE   			rtc_register[4]
#define		MONTH  			rtc_register[5]
#define		YEAR   			rtc_register[6]


unsigned char time[9]; 	//xx:xx:xx;
unsigned char date[11];	//xx/xx/xxxx;
unsigned char day;
unsigned int dateFAT, timeFAT;
unsigned char rtc_register[7];

unsigned char RTC_setStartAddress(void);
unsigned char RTC_read(void);
unsigned char RTC_write(void);
unsigned char RTC_getTime(void);
unsigned char RTC_getDate(void);
unsigned char RTC_displayTime(void);
unsigned char RTC_displayDate(void);
void RTC_displayDay(void);
void RTC_updateRegisters(void);
unsigned char RTC_writeTime(void);
unsigned char RTC_writeDate(void);
unsigned char RTC_updateTime(void);
unsigned char RTC_updateDate(void);
unsigned char getDateTime_FAT(void);


#endif
	
