#include "Item.h"

namespace assignment1
{
	class Candy : public Item
	{
	public:
		Candy(const char* name, float weight);

		unsigned int GetCost() const;
		const std::string GetName() const;

	private:
		// private variables here
		float mWeight;
		const char* mName;
	};
}