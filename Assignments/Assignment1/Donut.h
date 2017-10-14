#include "Item.h"

namespace assignment1
{
	class Donut : public Item
	{
	public:
		Donut(const std::string name, unsigned int count);
		virtual ~Donut();
		unsigned int GetCost() const;
	private:
		int mCount;
	};
}