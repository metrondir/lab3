#include "CalendarManager.h"
#include <iostream>
#include <conio.h>

#pragma warning(disable : 4996)

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");

		
		CalendarManager EventList;
		EventList.FillEvents();
		std::cout << "Write the date you are looking for: ";
		int Day,Month,Year;
		std::cin >> Day;
		std::cin >> Month;
		std::cin >> Year;
		EventList.Find(Day, Month, Year);
		char* Event;
		std::cout << "Write the event you are looking for: ";
		Event = Console::GetText(cin);
		EventList.Find(Event);
		EventList.ShowResult();
		EventList.BinaryOperators();
		EventList.BinaryOperators2();
		EventList.ShowResult();
		while (!kbhit());
	}
