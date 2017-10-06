#include "ShoppingCart.h"
#include "Item.h"

namespace assignment1
{
	ShoppingCart::ShoppingCart()
	{
	}

	bool ShoppingCart::AddItem(const Item* item)
	{
		if ((item != NULL) && (count < 10))
		{
			mList[count] = (char)item;
			count++;
			return true;
		}
		else
		{
			return false;
		}
	}

	bool ShoppingCart::RemoveItem(unsigned int index)
	{
		if (index <= count)
		{
			for (int i = index; i < count; i++) // i < 10
			{
				mList[index] = mList[index + 1];
				mList[count - 1] = NULL;
			}
			return true;
		}
		else
		{
			return false; // return true if success. Else return false
		}
	}

	const Item* ShoppingCart::GetItem(unsigned int index) const
	{
		if (index < 10)
		{
			return (Item*)mList[index];
		}
		else
		{
			return NULL;
		}
	}

	const Item* ShoppingCart::operator[](unsigned int index) const
	{
		if (index < 10)
		{
			return (Item*)mList[index];
		}
		else
		{
			return NULL;
		}
	}

	float ShoppingCart::GetTotal() const
	{
		
		return 0.f; // return total cost in dollars
	}
}