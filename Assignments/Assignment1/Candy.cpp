#include "Candy.h"
#include <cmath>

namespace assignment1
{
	Candy::Candy(const std::string name, float weight)
		: Item(name)
		, mWeight(weight)
	{
	}

	unsigned int Candy::GetCost() const
	{
		return static_cast<int>(nearbyint(68 * mWeight));
	}

	Candy::~Candy()
	{
	}

}