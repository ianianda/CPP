#include <iostream>

#include "Blizzard.h"
#include "Candy.h"
#include "Donut.h"
#include "IceCream.h"
#include "Item.h"
#include "ShoppingCart.h"

using namespace assignment1;

int main()
{
	ShoppingCart cart;

	Item* blizzard = new Blizzard("smarties blizzard", 3);
	Item* blizzard2(blizzard);

	IceCream* icecream = new IceCream("Vanilla", 2);

	icecream->AddCone();

	IceCream* icecream2(icecream);
	cart.AddItem(icecream);

	std::cout << cart.RemoveItem(0) << std::endl;
}
