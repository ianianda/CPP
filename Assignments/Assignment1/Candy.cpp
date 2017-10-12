#include "Candy.h"
#include <cmath>

namespace assignment1
{
	Candy::Candy(const char* name, float weight)
		: Item(name)
		, mWeight(weight)
		, mName(name)
	{
	}

	unsigned int Candy::GetCost() const
	{
		return static_cast<int>(nearbyint(68 * mWeight));
	}

	Candy::~Candy()
	{
	}

	const std::string Candy::GetName() const
	{
		return mName; // return cost here
	}
}