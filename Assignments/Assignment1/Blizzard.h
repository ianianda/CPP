#pragma once

#include "IceCream.h"

namespace assignment1
{
	class Cone;

	class Blizzard : public IceCream
	{
	public:
		Blizzard(const std::string name, unsigned int numScoops);
		Blizzard(const Blizzard& copyConstructor);

		virtual ~Blizzard();
		unsigned GetCost() const;
		void AddCone();

	private:
		int mScoops;
		Cone* mCone;
	};
}
