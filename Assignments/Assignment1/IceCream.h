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
		void AddCone();

	private:
		// private variables here
		int ounces;
		//int price;
		Cone* mCone;
	};
}