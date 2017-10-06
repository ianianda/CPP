#pragma once

namespace assignment1
{
	class Item;

	class ShoppingCart
	{
	public:
		ShoppingCart();

		bool AddItem(Item* item);
		bool RemoveItem(unsigned int index);

		const Item* GetItem(unsigned int index) const;
		const Item* operator[](unsigned int index) const;

		float GetTotal() const;
	private:
		ShoppingCart(const ShoppingCart& other) {}

		// private variables here
		int maxSize = 10;
		Item* mList[10];
		int count = 0;
	};
}
