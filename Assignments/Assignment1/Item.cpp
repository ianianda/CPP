#include "Item.h"

namespace assignment1
{
	/* abstract class */
	Item::Item(const char* name)
	{
		//mName = name;
	}

	Item::~Item()
	{

	}

	/* gets the name of item */
	const std::string Item::GetName() const
	{
		return std::string(); // return name here
	}
}
