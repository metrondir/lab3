#pragma once
#include "Calendar.h"
#include "List.h"

class CalendarManager
{
	int EventCount;
	Calendar* events;
	List* IOWorker;


public:
	CalendarManager();
	~CalendarManager(void);

	void FillEvents();

	void BinaryOperators();

	void BinaryOperators2();

	void ShowResult();

	void Find(const char* Event);

	void Find(int Day, int Month, int Year);

};

