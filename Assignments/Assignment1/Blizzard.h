#pragma once

#include "IceCream.h"

namespace assignment1
{
	class Blizzard : public IceCream
	{
	public:
		Blizzard(const char* name, unsigned int numScoops);
		virtual ~Blizzard();
		unsigned GetCost() const;
//		const std::string GetName() const;

	private:
		int mScoops;
//		const char* mName;
	};
}
