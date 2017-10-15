#include "Blizzard.h"
#include "Cone.h"

namespace assignment1
{
	Blizzard::Blizzard(const Blizzard& other)
		: IceCream(other.GetName(), other.mScoops)
		, mScoops(other.mScoops)
	{
		if (other.mCone != NULL)
		{
			mCone = new Cone();
			memcpy(mCone, other.mCone, sizeof(mCone));
		}
	}

	Blizzard::Blizzard(const std::string name, unsigned int scoops)
		: IceCream(name, scoops)
		, mScoops(scoops)
		, mCone(NULL)
	{
	}

	unsigned int Blizzard::GetCost() const
	{
		if (mCone != NULL)
		{
			return (int)(mScoops * 2 * 120 + 120 + mCone->GetCost());
		}
		else
		{
			return (int)(mScoops * 2 * 120 + 120);
		}
	}

	void Blizzard::AddCone()
	{
		if (mCone == NULL)
		{
			mCone = new Cone();
		}
	}

	Blizzard::~Blizzard()
	{
		if (mCone != NULL)
		{
			delete mCone;
			mCone = NULL;
		}
	}
}