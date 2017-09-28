#include "TimeSheet.h"
#include <iostream>
using namespace std;

int main(const char* name, const int *day)
{
	lab3::AddTime(std::cin, std::cout); // time worked each day. hours < 10, otherwise, ignore.
	lab3::GetTotalTime(std::cin, std::cout);  // time worked totally. hours + hours + hours...
	lab3::GetAverageTime(std::cin, std::cout); // total hours / total days
	std::string& GetName(std::cin, std::cout); //name of employee.
	return 0;
}