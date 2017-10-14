#pragma once

#include <string>

namespace assignment1
{
	/* abstract class */
	class Item
	{
	public:
		Item(std::string name);
		virtual unsigned int GetCost() const = 0;
		const std::string GetName() const;

	protected:
		virtual ~Item();

	private:
		friend class ShoppingCart;
		const std::string mName;
	};
}
#pragma once
