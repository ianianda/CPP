#include "ShoppingCart.h"
#include "Item.h"

namespace assignment1
{
	ShoppingCart::ShoppingCart(const ShoppingCart& other)
	//	: mItem(other.mItem)
	{
	}

	ShoppingCart::ShoppingCart()
	{
	}

	bool ShoppingCart::AddItem(const Item* item)
	{
		if (item != NULL)
		{
			Item.add(item);
			return true;
		}
		else
		{
			return false;
		}
	}

	bool ShoppingCart::RemoveItem(unsigned int index)
	{
		return false; // return true if success. Else return false
	}

	const Item* ShoppingCart::GetItem(unsigned int index) const
	{
		if (index < 10)
		{
			return item[index];
		}
		else
		{
			return NULL;
		}
	}

	const Item* ShoppingCart::operator[](unsigned int index) const
	{
		if (index == 0)
		{
			return Cart[0];
		}
		return NULL;
	}

	float ShoppingCart::GetTotal() const
	{
		return 0.f; // return total cost in dollars
	}
}