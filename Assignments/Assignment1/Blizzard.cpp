#include "Blizzard.h"

namespace assignment1
{
	Blizzard::Blizzard(const char* name, unsigned int scoops)
		: IceCream(name, scoops)
		, mScoops(scoops)
	{
	}

	unsigned int Blizzard::GetCost() const
	{
		return (int)(mScoops * 2 * 120 + 120); // return cost here
	}

	const std::string Blizzard::GetName() const
	{
		return IceCream::GetName(); // return cost here
	}

	Blizzard::~Blizzard()
	{
	}
}
