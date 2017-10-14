#include "Item.h"

namespace assignment1
{
	/* abstract class */
	Item::Item(const std::string name)
		:mName(name)
	{
		
	}

	Item::~Item()
	{

	}

	/* gets the name of item */
	const std::string Item::GetName() const
	{
		return mName; // return name here
	}
}
