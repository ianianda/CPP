#include "Donut.h"
#include <cmath>
#include <math.h>

namespace assignment1
{
	Donut::Donut(const char * name, unsigned int count)
		: Item(name)
		, mCount(count)
		, mName(name)
	{
	}

	unsigned int Donut::GetCost() const
	{
		return static_cast<int>(899 * mCount / 12);
	}

	const std::string Donut::GetName() const
	{
		return mName; // return cost here
	}

	Donut::~Donut()
	{
	}
}
