#include "Blizzard.h"

namespace assignment1
{
	Blizzard::Blizzard(const char* name, unsigned int scoops)
		: IceCream(name, scoops)
		, mScoops(scoops)
		, mName(name)
	{
	}

	unsigned int Blizzard::GetCost() const
	{
		return (int)(mScoops * 2 * 120 + 120); // return cost here
	}

	const std::string& Blizzard::GetName() const
	{
		return mName; // return cost here
	}

	Blizzard::~Blizzard()
	{
	}
}
