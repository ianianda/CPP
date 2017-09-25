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
		return 0U; // return cost here
	}

	void IceCream::AddCone()
	{
	}
}
