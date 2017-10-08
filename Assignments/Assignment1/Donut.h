#include "Item.h"

namespace assignment1
{
	class Donut : public Item
	{
	public:
		Donut(const char* name, unsigned int count);
		virtual ~Donut();
		unsigned int GetCost() const;
		const std::string GetName() const;

	private:
		// private variables here
		int mCount;
		const char* mName;
	};
}