#include "ShoppingCart.h"
#include "Item.h"
#include <math.h>

namespace assignment1
{
	ShoppingCart::ShoppingCart()
	{
		count = 0;
		for (unsigned i = 0; i < 10; i++)
		{
			mList[i] = NULL;
		}
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
		if ((index > count) || (index == count)) {
			return false;
		}
		else if (index < count)
		{
			for (unsigned int i = index; i < count; i++)
			{
				if (i < 9)
				{
					mList[i] = mList[i + 1];
				}
			}
			mList[count - 1] = NULL;
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