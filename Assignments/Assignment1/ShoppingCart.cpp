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
		else
		{
			return false;
		}
	}

	bool ShoppingCart::RemoveItem(unsigned int index)
	{
		if (index == count) {
			mList[index] = NULL;
		}
		else if (index < count)
		{
			for (unsigned int i = index; i < count; i++)
			{
				mList[index] = mList[index + 1];
				mList[count - 1] = NULL;
			}
			return true;
		}
		else
		{
			return false;
		}
		count--;
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
		else
		{
			return NULL;
		}
	}

	float ShoppingCart::GetTotal() const
	{
		float result = 0;
		for (unsigned int i = 0; i < count; i++) {
			if (mList[i] != NULL)
				result += (*mList[i]).GetCost();
		}
		return result / 100;
	}

	ShoppingCart::~ShoppingCart()
	{
		delete[] * mList;
	}
}