#include "Candy.h"
#include <cmath>

namespace assignment1
{
	Candy::Candy(const char* name, float weight)
		: Item(name)
		, mName(name)
		, mWeight(weight)
	{
	}

	const std::string Candy::GetName() const
	{
		return mName;
	}

	unsigned int Candy::GetCost() const
	{
		return static_cast<int>(nearbyint(68*mWeight));
	}
}