#include "Donut.h"
#include <cmath>
#include <math.h>

namespace assignment1
{
	Donut::Donut(const std::string name, unsigned int count)
		: Item(name)
		, mCount(count)
	{
	}
	unsigned int Donut::GetCost() const
	{
		return static_cast<int>(899 * mCount / 12);
	}

	Donut::~Donut()
	{
	}
}
