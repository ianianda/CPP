#pragma once

#include <iomanip>
#include <string>  
#include <iostream>

namespace lab3
{
	class TimeSheet
	{
	public:
		TimeSheet(const char* employeeName, int maxEntries); // constructor. 
														// name of employee, number of time entries
		TimeSheet(const TimeSheet& copyEmployeeName, const TimeSheet& copyMaxEntries); // copy constructor
		virtual ~TimeSheet(); // desctructor

		TimeSheet(const TimeSheet& copyEmployeeName, const TimeSheet& copyMaxEntries)
			: mTotalDays(copyEmployeeName.mTotalDays)
			, mTotalHours(copyEmployeeName.mTotalHours)
			, mHourofDay(copyEmployeeName.mHourofDay)
		{
			mName = new char[];
			strcpy(mName, copyEmployeeName.GetName);
			//memcpy(); ??
		}


		void AddTime(float hours); // time worked each day. hours < 10, otherwise, ignore.
		float GetTotalTime() const;  // time worked totally. hours + hours + hours...
		float GetAverageTime() const; // total hours / total days
		const std::string& GetName() const; //name of employee.

	private:
		// You will need to add some private variables
		// to keep track of the time record. Define them here.
		int mTotalDays;
		float mTotalHours;
		const char* mName;
		float mHourofDay;
	};

	// copy constructor 
	
	TimeSheet::~TimeSheet()
	{
		//delete mTotalDays;
		//delete mTotalHours;
		delete[] mName;
	}
}