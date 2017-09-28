#include "TimeSheet.h"

#include <iomanip>
#include <string>  
#include <iostream>

namespace lab3
{
	TimeSheet::TimeSheet(const char* name, int numDays)
	{
		mName = name;
		mTotalDays = numDays;
	}

	//TimeSheet::TimeSheet(const TimeSheet& copyEmployeeName)

	//{
		//mName = new char[strlen(copyEmployeeName.GetName())];
		//strcpy(mName, copyEmployeeName.GetName);
		//memcpy(); ??
	//}

	void TimeSheet::AddTime(float timeInHours)
	{
		if (timeInHours < 10 && timeInHours >= 0) // store the time.
		{
			mHourofDay += timeInHours;
		}
		else
		{
		}
	}

	float TimeSheet::GetTotalTime() const
	{
		return mHourofDay;
	}

	float TimeSheet::GetAverageTime() const
	{
		float value = (float)mHourofDay / mTotalDays;
		if (mHourofDay == NULL) {
			return NULL;
		}
		return value;
	}

	const std::string & TimeSheet::GetName() const
	{
		return mName;
	}

	TimeSheet::~TimeSheet()
	{
		//delete mTotalDays;
		//delete mTotalHours;
		delete[] mName;
	}

}