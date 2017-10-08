#pragma once
#include "Item.h"

namespace assignment1
{
	class Cone;

	class IceCream : public Item
	{
	public:
		IceCream(const char* name, unsigned int numScoops);
		virtual ~IceCream();
		unsigned int GetCost() const;
		const std::string GetName() const;
		void AddCone();

	private:
		int ounces;
		const char* mName;
		Cone* mCone;
	};
}