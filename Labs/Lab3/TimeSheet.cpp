#include "TimeSheet.h"

namespace lab3
{
	TimeSheet::TimeSheet(const TimeSheet& other)
		: mName(other.mName)
		, mTotalDays(other.mTotalDays)
		, mHourofDay(other.mHourofDay)
		, max(other.max)
	{
	}

	TimeSheet::TimeSheet(const char* name, int maxEntries)
	{
		mName = name;
		mHourofDay = 0;
		mTotalDays = 0;
		max = maxEntries;
	}

	void TimeSheet::AddTime(float timeInHours)
	{
		if (timeInHours < 10 && timeInHours > 0 && mTotalDays < max)// store the time.
		{
			mHourofDay += timeInHours;
			mTotalDays++;
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
		if (mTotalDays == 0)
		{
			return 0;
		}
		float value = (float)mHourofDay / mTotalDays;
		return value;
	}

	const std::string& TimeSheet::GetName() const
	{
		return mName;
	}

	TimeSheet::~TimeSheet()
	{
	}

}