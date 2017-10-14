#pragma once
#include "Item.h"

namespace assignment1
{
	class Cone;

	class IceCream : public Item
	{
	public:
		IceCream(const std::string name, unsigned int numScoops);
		IceCream(const IceCream& other);
		virtual ~IceCream();
		unsigned int GetCost() const;
		void AddCone();

	private:
		int ounces;
		Cone* mCone;
	};
}