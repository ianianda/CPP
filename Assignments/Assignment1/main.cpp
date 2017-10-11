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

	Item* candy1 = new Candy("gummy bears", 2.5f);
	Item* donut1 = new Donut("candian maple", 4);
	Item* candy2 = new Candy("gummy bears", 2.5f);
	Item* donut2 = new Donut("candian maple", 4);
	Item* candy3 = new Candy("gummy bears", 2.5f);
	Item* donut3 = new Donut("candian maple", 4);
	Item* candy4 = new Candy("gummy bears", 2.5f);
	Item* donut4 = new Donut("candian maple", 4);
	Item* icecream = new IceCream("Vanilla", 2);
	
	cart.AddItem(blizzard);
	cart.AddItem(candy1);
	cart.AddItem(donut1);
	cart.AddItem(icecream);
	cart.AddItem(candy2);
	cart.AddItem(candy3);
	cart.AddItem(donut2);
	cart.AddItem(donut3);
	cart.AddItem(donut4);
	cart.AddItem(candy4);

	std::cout << cart.RemoveItem(1) << std::endl;
}
