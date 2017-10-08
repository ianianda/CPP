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
//		void AddCone();

	private:
		// private variables here
		float mWeight;
//		Cone* mCone;
		const char* mName;
	};
}