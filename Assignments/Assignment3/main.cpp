#include "TreeNode.h"
#include "BinarySearchTree.h"
#include <string>
#include <iostream>

using namespace assignment3;

int main()
{
	BinarySearchTree<int> tree;
	tree.Insert(std::make_unique<int>(10));
	tree.Insert(std::make_unique<int>(15));
	tree.Insert(std::make_unique<int>(5));
	tree.Insert(std::make_unique<int>(4));
	tree.Insert(std::make_unique<int>(19));
	tree.Insert(std::make_unique<int>(20));
	tree.Insert(std::make_unique<int>(17));
	tree.Insert(std::make_unique<int>(12));

	bool bSearched8 = tree.Search(10);
	bool bSearched1 = tree.Search(15);
	bool bSearched2 = tree.Search(5);
	bool bSearched3 = tree.Search(4);
	bool bSearched4 = tree.Search(19);
	bool bSearched5 = tree.Search(20);
	bool bSearched6 = tree.Search(17);
	bool bSearched7 = tree.Search(12);
	std::vector<int> v = tree.TraverseInOrder(tree.GetRootNode().lock());

	for (std::vector<int>::iterator it = v.begin() + 1; it != v.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

	std::cout << "--------------------------" << std::endl;

	tree.Delete(6);
	tree.Delete(100);
	tree.Delete(15);

	v = tree.TraverseInOrder(tree.GetRootNode().lock());

	for (std::vector<int>::iterator it = v.begin() + 1; it != v.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

	std::cout << "--------------------------" << std::endl;

	bool bSearched = tree.Search(15);

	return 0;
}
