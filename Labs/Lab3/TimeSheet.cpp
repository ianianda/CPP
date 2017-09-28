#include "TimeSheet.h"

namespace lab3
{
	TimeSheet::TimeSheet(const TimeSheet& other)
		: mName(other.mName)
		, mTotalDays(other.mTotalDays)
		, mHourofDay(other.mHourofDay)
		, maxEntries(other.maxEntries)
	{
	}

	TimeSheet::TimeSheet(const char* name, int maxEntries)
		: maxEntries(maxEntries)
	{
		mName = name;
		mHourofDay = 0;
		mTotalDays = 0;
	}

	void TimeSheet::AddTime(float timeInHours)
	{
		if (timeInHours < 10 && timeInHours > 0 && mTotalDays < maxEntries)// store the time.
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