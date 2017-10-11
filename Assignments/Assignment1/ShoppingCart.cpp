#include "ShoppingCart.h"
#include "Item.h"
#include <math.h>

namespace assignment1
{
	ShoppingCart::ShoppingCart()
	{
		count = 0;
	}

	bool ShoppingCart::AddItem(const Item* item)
	{
		if ((item != NULL) && (count < 10))
		{
			mList[count] = item;
			count++;
			return true;
		}
		return false;
	}

	bool ShoppingCart::RemoveItem(unsigned int index)
	{
		if ((index == count)) {
			mList[index] = NULL;
			if (index != 0) {
				count--;
				return true;
			}
			return false;
		}
		else if (index < count)
		{
			for (unsigned int i = index; i < count; i++) // i < 10
			{
				mList[i] = mList[i + 1];
			}
			mList[count] = NULL;
			count--;
			return true;
		}
		return false;
	}

	const Item* ShoppingCart::GetItem(unsigned int index) const
	{
		if ((index <= count))
		{
			return mList[index];
		}
		else
		{
			return NULL;
		}
	}

	const Item* ShoppingCart::operator[](unsigned int index) const
	{
		if ((index <= count))
		{
			return mList[index];
		}
		return NULL;
	}

	float ShoppingCart::GetTotal() const
	{
		float result = 0;
		for (unsigned int i = 0; i < count; i++) {
			if (mList[i] != NULL)
			{
				result += (*mList[i]).GetCost();
			}
		}
		return result / 100; // return total cost in dollars
	}

	ShoppingCart::~ShoppingCart()
	{
		delete[] * mList;
	}
}