#include "Candy.h"
#include <cmath>

namespace assignment1
{
	Candy::Candy(const char* name, float weight)
		: Item(name)
	{
	}

	unsigned int Candy::GetCost() const
	{
		return 0U; // return cost here
	}
}
