#include "DoublyLinkedList.h"
#include "Node.h"

using namespace lab7;

int main()
{
	DoublyLinkedList<int> list;

	list.Insert(std::make_unique<int>(1));
	list.Insert(std::make_unique<int>(2));
	list.Insert(std::make_unique<int>(3));
	list.Insert(std::make_unique<int>(4));

	list.Delete(3);
	//list.Insert(std::make_unique<int>(1), 2);

	//bool bExists = list.Search(0);
	//unsigned int size = list.GetLength();
	//std::shared_ptr<Node<int>> node = list[0];

	return 0;
}
