#include "List.h"
#include <iostream>
void List::Input(Calendar& events){
	std::cout << " Write the number : \n";
	events.setDay(Console::GetValue(std::cin));
	
	std::cout << " Write the month : \n";
	events.setMonth(Console::GetValue(std::cin));
	
	std::cout << "  Write the year : \n";
	events.setYear(Console::GetValue(std::cin));

	std::cout << "  Write event : \n";
	events.setEvent(Console::GetText(std::cin));
}


void List::Output(Calendar& events) {
	std::cout << " Day: ";
	std::cout << events.getDay() << std::endl;

	std::cout << " Month: ";
	std::cout <<  events.getMonth()<<std::endl;

	std::cout << " Year: ";
	std::cout <<  events.getYear()<<std::endl;

	std::cout << " Event: ";
	std::cout <<  events.getEvent()<< std::endl;


}
