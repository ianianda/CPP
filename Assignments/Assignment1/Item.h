#pragma once

#include <string>

namespace assignment1
{
	/* abstract class */
	class Item
	{
	public:
		Item(const char* name);
		virtual unsigned int GetCost() const = 0;
		virtual const std::string GetName() const = 0;

	protected:
		virtual ~Item();

	private:
		friend class ShoppingCart;
	};
}
#pragma once
