#pragma once

#include "IceCream.h"

namespace assignment1
{
	class Cone;

	class Blizzard : public IceCream
	{
	public:
		Blizzard(const char* name, unsigned int numScoops);
		virtual ~Blizzard();
		unsigned GetCost() const;
		void AddCone();
		const std::string GetName() const;

	private:
		int mScoops;
		Cone* mCone;
		const char* mName;
	};
}
