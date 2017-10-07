#pragma once

namespace assignment1
{
	class Item;

	class ShoppingCart
	{
	public:
		ShoppingCart();
		virtual ~ShoppingCart();
		bool AddItem(const Item* item);
		bool RemoveItem(unsigned int index);

		const Item* GetItem(unsigned int index) const;
		const Item* operator[](unsigned int index) const;

		float GetTotal() const;
	private:
		ShoppingCart(const ShoppingCart& other) {}

		// private variables here
		int maxSize = 10;
		const Item* mList[10];
		unsigned int count = 0;
	};
}
