#include "TimeSheet.h"
using namespace lab3;
using namespace std;

int main()
{
	//	float a = 10;
	//	std::cin >> a;

	TimeSheet* timesheet = new TimeSheet("poppy", 5);

	timesheet->AddTime(-7); // time worked each day. hours < 10, otherwise, ignore.
	timesheet->GetTotalTime();  // time worked totally. hours + hours + hours...
	timesheet->GetAverageTime(); // total hours / total days
	timesheet->GetName(); //name of employee.
	//cout << "haha" << timesheet->GetAverageTime() << endl;
	//cout << timesheet->AddTime(7); // time worked each day. hours < 10, otherwise, ignore.
	cout << timesheet->GetTotalTime() << endl;  // time worked totally. hours + hours + hours...
	cout << timesheet->GetAverageTime() << endl; // total hours / total days
	cout << timesheet->GetName() << endl;//name of employee.

	return 0;
}