#include "Item.h"

namespace assignment1
{
	class Candy : public Item
	{
	public:
		Candy(const std::string name, float weight);
		virtual ~Candy();
		unsigned int GetCost() const;
	private:
		float mWeight;
	};
}