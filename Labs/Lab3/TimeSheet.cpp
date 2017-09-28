#include "TimeSheet.h"

namespace lab3
{
	TimeSheet::TimeSheet(const TimeSheet& other)
		:mName(other.mName)
		, mTotalDays(other.mTotalDays)
		, mHourofDay(other.mHourofDay)
	{
	}

	TimeSheet::TimeSheet(const char* name, int numDays)
		: mTotalDays(numDays)
	{
		mName = name;
		mHourofDay = 0;
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
		return mHourofDay;
	}

	float TimeSheet::GetAverageTime() const
	{
		float value = (float)mHourofDay / mTotalDays;
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
		//delete mName;
	}

}