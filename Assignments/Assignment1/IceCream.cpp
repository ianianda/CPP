#include "IceCream.h"
#include "Cone.h"

#include <cmath>

namespace assignment1
{
	IceCream::IceCream(const IceCream& other)
		: Item(other.mName)
		, ounces(other.ounces)
		, mName(other.mName)
		, mCone(new Cone(*(other.mCone)))
	{
	}

	IceCream::IceCream(const char* name, unsigned int scoops)
		: Item(name)
		, mCone(NULL)
		, ounces(scoops * 2)
		, mName(name)
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
	}

	const std::string IceCream::GetName() const
	{
		return mName; // return cost here
	}

	IceCream::~IceCream()
	{
		if (mCone != NULL)
		{
			delete mCone;
		}

		mCone = NULL;
	}
}
