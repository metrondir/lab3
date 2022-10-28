#pragma once
#include <math.h>
class Calendar
{
private:
	 int Day;
	 int Month;
	 int Year;
	 char* Event;
public:
	Calendar(void);
	~Calendar(void);

	int getDay();
	void setDay(int value);
	int getMonth();
	void setMonth(int value);
	int getYear();
	void setYear( int value);
	char* getEvent();
	void setEvent(const char* value);
	int operator<=(const Calendar& value) ;
	int operator>=(const Calendar& value) ;
	Calendar& operator=(const Calendar& value);
	int operator<(const Calendar& value) ;
	int operator>(const Calendar& value) ;
	int operator==(const Calendar& value) ;
	int operator!=(const Calendar& value) ;
	Calendar operator+=(int value) {
		int temp = Day + value;
		if (temp > 31) {	
			Day=temp - 31;
			if (Month + 1 > 12) {
				Month = 1;
				Year++;
			}
			else {
				Month++;
			}
		}
		else
		{
			Day += value;
		}
		temp = Month + value;
		if (temp > 12) {
			Month = 1;
			Year++;
		}
		else {
			Month+=value;
		}
		 Year += value;
		return *this;
	}
	Calendar operator-=(int value) {
		int temp = Day - value;
		if (temp<=0) {
			Day = 31 - abs(temp);
			if (Month - 1 < 0) {
				Month = 12;
				Year--;
			}	
		}
		else
		{
			Day -= value;
		}
		temp = Month - value;
		if (temp <= 0) {
			Month = 12-abs(temp);
			Year--;
		}
		else {
			Month -= value;
		}
		Year -= value;
		return *this;
	}
	
};

