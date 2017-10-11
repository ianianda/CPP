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
		const Item* mList[10];
		unsigned int count;
	};
}
