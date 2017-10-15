#include "Blizzard.h"
#include "Cone.h"

namespace assignment1
{
	Blizzard::Blizzard(const Blizzard& other)
		: IceCream(other)
	{
	}

	Blizzard::Blizzard(const std::string name, unsigned int scoops)
		: IceCream(name, scoops)
		, mCone(NULL)
	{
		mScoops = scoops;
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