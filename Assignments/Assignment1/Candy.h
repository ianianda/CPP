#pragma once

#include "Item.h"

namespace assignment1
{
	class Candy : public Item
	{
	public:
		Candy(const char* name, float weight);

		unsigned int GetCost() const;

	private:
		// private variables here
	};
}