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

	Item* blizzard = new Blizzard("Smarties Blizzard", 3);
	Item* candy = new Candy("Gummy Bears", 2.5f);
	Item* donut = new Donut("Candian Maple", 4);
	IceCream* icecream = new IceCream("Vanilla", 2);

	icecream->AddCone();

	//cart.AddItem(blizzard);
	//cart.AddItem(candy);
	//cart.AddItem(donut);
	//cart.AddItem(icecream);
	//cart.GetItem(8);
	std::cout << cart.GetItem(8) << std::endl;;
	//std::cout << cart.GetTotal() << std::endl; // should print 18
}
