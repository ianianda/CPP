#include "DoublyLinkedList.h"
#include "Node.h"

using namespace lab7;

int main()
{
	DoublyLinkedList<float> list;

	/*list.Insert(std::make_unique<int>(1));
	list.Insert(std::make_unique<int>(2));
	list.Insert(std::make_unique<int>(3));
	list.Insert(std::make_unique<int>(4));
	list.Insert(std::make_unique<int>(5));
	list.Insert(std::make_unique<int>(6));*/
	//bool flag;
	list.Insert(std::make_unique<float>(1.0f));
	list.Insert(std::make_unique<float>(2.0f));
	list.Insert(std::make_unique<float>(3.0f));

	list.Insert(std::make_unique<float>(4.0f), 1);
	list.Insert(std::make_unique<float>(5.0f), 3);
	
	//bool bExists = list.Search(0);
	//unsigned int size = list.GetLength();
	//std::shared_ptr<Node<int>> node = list[0];

	return 0;
}