#pragma once

#include <string>

namespace lab3
{
	class TimeSheet
	{
	public:
		TimeSheet(const char* employeeName, int maxEntries);

		// Write a copy constructor and a destructor here.

		void AddTime(float hours);
		float GetTotalTime() const;
		float GetAverageTime() const;
		const std::string& GetName() const;

	private:
		// You will need to add some private variables
		// to keep track of the time record. Define them here.
	};
}