#pragma once
#include "Item.h"

namespace assignment1
{
	class Cone;

	class IceCream : public Item
	{
	public:
		IceCream(const char* name, unsigned int numScoops);
		IceCream(const IceCream& other);
		virtual ~IceCream();
		unsigned int GetCost() const;
		virtual const std::string GetName() const;
		void AddCone();

	private:
		int ounces;
		const char* mName;
		Cone* mCone;
	};
}