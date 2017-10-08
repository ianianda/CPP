#include "Item.h"

namespace assignment1
{
	class Candy : public Item
	{
	public:
		Candy(const char* name, float weight);
		virtual ~Candy();
		unsigned int GetCost() const;
		const std::string GetName() const override;
		
	private:
		float mWeight;
		const char* mName;
	};
}