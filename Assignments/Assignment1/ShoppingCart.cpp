#include "ShoppingCart.h"
#include "Item.h"

namespace assignment1
{
	ShoppingCart::ShoppingCart()
	{
	}

	bool ShoppingCart::AddItem(const Item* item)
	{
		return false; // return true if success. Else return false
	}

	bool ShoppingCart::RemoveItem(unsigned int index)
	{
		return false; // return true if success. Else return false
	}

	const Item* ShoppingCart::GetItem(unsigned int index) const
	{
		return NULL;
	}

	const Item* ShoppingCart::operator[](unsigned int index) const
	{
		return NULL;
	}

	float ShoppingCart::GetTotal() const
	{
		return 0.f; // return total cost in dollars
	}
}
