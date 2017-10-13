#include "Blizzard.h"
#include "Cone.h"

namespace assignment1
{
	Blizzard::Blizzard(const Blizzard& other)
		: IceCream(other.mName, other.mScoops)
		, mScoops(other.mScoops)
		, mName(other.mName)
		, mCone(other.mCone)
	{
	}

	Blizzard::Blizzard(const char* name, unsigned int scoops)
		: IceCream(name, scoops)
		, mScoops(scoops)
		, mCone(NULL)
		, mName(name)
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
		}
	}

	const std::string Blizzard::GetName() const
	{
		return mName;
	}
}