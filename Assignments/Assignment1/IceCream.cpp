#include "IceCream.h"
#include "Cone.h"

#include <cmath>

namespace assignment1
{
	IceCream::IceCream(const char* name, unsigned int scoops)
		: Item(name)
		, mCone(NULL)
	{
	}

	unsigned int IceCream::GetCost() const
	{
		ounces = scoops * 2;
		price = 120 * ounces;
		return 0U; // return cost here
	}

	void IceCream::AddCone()
	{
		mCone;
	}
}
