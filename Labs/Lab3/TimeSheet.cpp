#include "TimeSheet.h"

namespace lab3
{
	TimeSheet::TimeSheet(const char* name, int numDays)
	{
		mName = name;
		mTotalDays = numDays;
	}

	void TimeSheet::AddTime(float timeInHours)
	{
		if (timeInHours < 10) // store the time.
		{
			mHourofDay += timeInHours;
		}
		else {

		}
	}

	float TimeSheet::GetTotalTime() const
	{

		return mHourofDay;
	}

	float TimeSheet::GetAverageTime() const
	{
		return (mHourofDay/mTotalDays);
	}

	const std::string & TimeSheet::GetName() const
	{
		return mName;
	}
}