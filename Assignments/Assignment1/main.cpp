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

	Candy* candy = new Candy("gummy bears", 2.5f);
	Donut* donut = new Donut("candian maple", 4);
	Item* icecream = new IceCream("Vanilla", 2);
	Item* icecream2(icecream);

	//blizzard->AddCone();
	//icecream->AddCone();

	cart.AddItem(blizzard);
	cart.AddItem(candy);
	cart.AddItem(donut);
	cart.AddItem(icecream);

	std::cout << blizzard->GetName() << std::endl;
	std::cout << icecream2->GetName() << std::endl;
	std::cout << icecream->GetName() << std::endl;
	std::cout << donut->GetName() << std::endl;
	std::cout << candy->GetName() << std::endl;
	std::cout << donut->GetName() << std::endl;

	std::cout << blizzard.GetCost() << std::endl;
	std::cout << cart.RemoveItem(0) << std::endl; // should print 18
}
