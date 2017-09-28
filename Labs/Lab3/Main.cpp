#include "TimeSheet.h"
//#include <iostream>
using namespace lab3;
using namespace std;

int main(const char* name, int day, float a)
{
	//	float a = 10;
	//	std::cin >> a;

	TimeSheet* timesheet = new TimeSheet(name, day);

	timesheet->AddTime(a); // time worked each day. hours < 10, otherwise, ignore.
	timesheet->GetTotalTime();  // time worked totally. hours + hours + hours...
	timesheet->GetAverageTime(); // total hours / total days
	timesheet->GetName(); //name of employee.
	return 0;
}