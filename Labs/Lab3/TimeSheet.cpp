#include "TimeSheet.h"

#include <iomanip>
#include <string>  
#include <iostream>

namespace lab3
{
	TimeSheet::TimeSheet(const char* name, int numDays)
	{
		if (name != NULL)
		{
			mName = name;
		}
		if (numDays >= 0)
		{
			mTotalDays = numDays;
		}
	}

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
		if (mHourofDay == NULL)
		{
			return NULL;
		}
		return mHourofDay;
	}

	float TimeSheet::GetAverageTime() const
	{
		float value = (float)mHourofDay / mTotalDays;
		if ((mHourofDay == NULL) || (mTotalDays == NULL)) {
			return NULL;
		}
		if ((mHourofDay < 0) || (mTotalDays < 0))
		{
			return NULL;
		}
		if (mHourofDay > 10)
		{
			return NULL;
		}
		return value;
	}

	const std::string & TimeSheet::GetName() const
	{
		if (mName == NULL)
		{
			return NULL;
		}
		return mName;
	}

	TimeSheet::~TimeSheet()
	{
		//delete mTotalDays;
		//delete mTotalHours;
		delete[] mName;
	}

}