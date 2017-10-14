#include "Cone.h"

namespace assignment1
{
	Cone::Cone()
	{
		cost = 10;
	}

	unsigned int Cone::GetCost() const
	{
		//if addCone method is called, price+10, return new price.
		return cost; // return cost here
	}
}