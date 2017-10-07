#include "IceCream.h"
#include "Cone.h"

#include <cmath>

namespace assignment1
{
	IceCream::IceCream(const char* name, unsigned int scoops)
		: Item(name)
		, mCone(NULL)
		, ounces(scoops * 2)
	{
	}

	unsigned int IceCream::GetCost() const
	{
		if (mCone != NULL)
		{
			return (120 * ounces + mCone->GetCost());
		}
		else
		{
			return 120 * ounces;
		}
	}

	void IceCream::AddCone()
	{
		if (mCone == NULL)
		{
			mCone = new Cone();
		}
		delete mCone;
	}
}
