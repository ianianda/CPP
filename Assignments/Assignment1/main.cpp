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

	//	Blizzard* blizzard = new Blizzard("Smarties Blizzard", 3);
	//	Candy* candy = new Candy("Gummy Bears", 2.5f);
	//	Donut* donut = new Donut("Candian Maple", 4);
	IceCream* icecream = new IceCream("Vanilla", 2);

	//	blizzard->AddCone();
	//	icecream->AddCone();

	//	cart.AddItem(blizzard);
	//	cart.AddItem(candy);
	//	cart.AddItem(donut);
	cart.AddItem(icecream);

	std::cout << icecream->GetName() << std::endl;
	//std::cout << donut->GetName() << std::endl;
	//std::cout << candy->GetName() << std::endl;
//	std::cout << donut->GetName() << std::endl;

	//std::cout << blizzard.GetCost() << std::endl;
//	std::cout << cart.GetTotal() << std::endl; // should print 18
}
