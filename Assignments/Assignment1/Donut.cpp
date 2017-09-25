#include "Donut.h"

#include <cmath>

namespace assignment1
{
	Donut::Donut(const char * name, unsigned int count)
		: Item(name)
	{
	}
	unsigned int Donut::GetCost() const
	{
		return 0U; // return cost here
	}
}
