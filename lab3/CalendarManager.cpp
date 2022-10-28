#include "CalendarManager.h"
CalendarManager::CalendarManager() {
	std::cout << "Write the number of events that you want to mark in the calendar: \n";
	EventCount = Console::GetValue(std::cin);
	events = new Calendar[EventCount];
	IOWorker = new List();
}
CalendarManager::~CalendarManager(void) {
	delete[] events;
	delete[] IOWorker;
}
void CalendarManager::FillEvents() {
    for (int i = 0; i < EventCount; i++) {
        IOWorker->Input(events[i]);
    }
}

void CalendarManager::BinaryOperators() {
    
    std::cout << "1 to add by value or 2 to decrease by value: \n";
    int a;
    std::cin >> a;
    switch (a) {
    case 1: {
        std::cout << "Write the value to add : \n";
        int y = Console::GetValue(std::cin);
        for (int i = 0; i < EventCount; i++) {
            events[i]+=y;
        }
        break;
    }
    case 2: {
        std::cout << "Write the value that is subtracted : \n";
        int y = Console::GetValue(std::cin);
        for (int i = 0; i < EventCount; i++) {
            events[i] -= y;
        }
        break;
    }  
    }
}
void CalendarManager::BinaryOperators2()
{
    int x, y;
    std::cout << "Enter the date number you want to compare:";
    std::cin >> x;
    std::cin >> y;
    if (events[x-1] == events[y-1]) std::cout << "1 date is equal to the second\n";

    if (events[x-1] != events[y-1]) std::cout << "1 date is not equal to the second\n";

    if(events[x-1] < events[y-1]) std::cout << "1 date is less than the second\n";

    if(events[x-1] > events[y-1]) std::cout << "1 date is greater than the second\n";

    if (events[x-1] <= events[y-1]) std::cout << "1 date is less is equal to the second \n";

    if (events[x-1] >= events[y-1]) std::cout << "1 date is more equal to the second\n";

}
void CalendarManager::ShowResult() {
    std::cout << "Result:";
    for (int i = 0; i < EventCount; i++) {
        IOWorker->Output(events[i]);
    }
}
void CalendarManager::Find(const char* Event) {
    std::cout << "Search by event: \n";
    for (int i = 0; i < EventCount; i++) {
        if (strcmp(events[i].getEvent(), Event) == 0)
            IOWorker->Output(events[i]);
    
    }
}
void CalendarManager::Find(int Day ,int Month, int Year) {
    std::cout << "Search by date \n";
    for (int i = 0; i < EventCount; i++) {
        if (events[i].getDay() == Day) 
            if (events[i].getMonth() == Month)
                if (events[i].getYear() == Year)
                    IOWorker->Output(events[i]);
    }
}

