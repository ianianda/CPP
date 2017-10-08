#include "Item.h"

namespace assignment1
{
	class Donut : public Item
	{
	public:
		Donut(const char* name, unsigned int count);
		virtual ~Donut();
		unsigned int GetCost() const;
		const std::string GetName() const override;

	private:
		int mCount;
		const char* mName;
	};
}