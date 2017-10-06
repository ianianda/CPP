#include "Donut.h"

#include <cmath>

namespace assignment1
{
	Donut::Donut(const char * name, unsigned int count)
		: Item(name)
		, mCount(count)
	{
	}
	unsigned int Donut::GetCost() const //round to nearest cent
	{
		return mCount/12*899; // 0U
	}
}
