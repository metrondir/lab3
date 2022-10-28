#include "Calendar.h"
#include "string.h"
#include "iostream"
#pragma warning (disable:4996)
Calendar::Calendar(void)
{
	setDay(1);
	setMonth(1);
	setYear(1991);
	setEvent("Uknown");
}

Calendar::~Calendar(void)
{
}

int Calendar::getDay()
{
	return Day;
}

void Calendar::setDay(int value)
{
	Day = -1;
	while (Day == -1) {
		try {
			if (value <= 31 && value > 0) { Day = value; }

			else
			{
				throw("There is no such meaning of the day of the month");
			}

		}
		catch (const char* err) {
			std::cout << "Error type: " << err << "\n Write again but correctly: ";
			std::cin >> value;
			std::cout << std::endl;
		}
	}
	
}

int Calendar::getMonth()
{
	return Month;
}

void Calendar::setMonth(int value)
{
	Month = -1;
	while (Month == -1) {
		try {
			if (value <= 12 && value > 0) { Month = value; }

			else
			{
				throw("There is no such value of a month in a year");
			}
		}
		catch (const char* err) {
			std::cout << "Error type: " << err << "\n Write again but correctly: ";
			std::cin >> value;
			std::cout << std::endl;
		}
	}
}

int Calendar::getYear()
{
	return Year;
}

void Calendar::setYear(int value)
{
	Year = -1;
	while (Year == -1) {
		try {
			if (value <= 2022 && value > 1900) { Year = value; }

			else
			{
				throw("Write the most likely year: ");
			}
		}
		catch (const char* err) {
			std::cout << "Error type: " << err<<"\n Write again but correctly:";
			std::cin >> value;
			std::cout << std::endl;
		}
	}
}

char* Calendar::getEvent()
{
	return Event;
}

void Calendar::setEvent(const char* value)
{
		Event = new char[strlen(value)];
		strcpy(Event, value);
}
Calendar& Calendar::operator=(const Calendar& value)
{
	if (this == &value)
		return *this;
	setDay(value.Day);
	setMonth(value.Month);
	setYear(value.Year);
	setEvent(value.Event);
	return *this;
}

int Calendar::operator<(const Calendar& value) 
{	
	return Day < value.Day && Month < value.Month&& Year < value.Year;
}
int Calendar::operator>(const Calendar& value) 
{
	return Day > value.Day && Month > value.Month && Year > value.Year;
}

int Calendar::operator==(const Calendar& value) 
{
	return Day == value.Day && Month == value.Month && Year == value.Year;
}
int Calendar::operator!=(const Calendar& value) 
{
	return Day != value.Day && Month != value.Month && Year != value.Year;
}
int Calendar::operator<=(const Calendar& value) 
{
	return Day <= value.Day && Month <= value.Month && Year <= value.Year;
}

int Calendar::operator>=(const Calendar& value) 
{
	return Day >= value.Day && Month >= value.Month && Year >= value.Year;
}







