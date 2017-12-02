#pragma once

#include <memory>
#include <vector>
#include <iostream>

namespace assignment3
{
	template<typename T>
	class TreeNode;

	template<typename T>
	class BinarySearchTree
	{
	public:
		void Insert(std::unique_ptr<T> data);
		bool Search(const T& data);
		bool Delete(const T& data);
		const std::weak_ptr<TreeNode<T>> GetRootNode() const;
		static std::vector<T> TraverseInOrder(const std::shared_ptr<TreeNode<T>> startNode);

	private:
		std::shared_ptr<TreeNode<T>> mRoot;

		// any other private members of methods can go here.
	};

	template<typename T>
	void BinarySearchTree<T>::Insert(std::unique_ptr<T> data)
	{
		//std::shared_ptr<Node<T>> rootPtr = mRoot;
		if (mRoot == nullptr) //no top key.
		{
			mRoot = std::make_shared<TreeNode<T>>(std::move(data));
		}
		else if (mRoot != nullptr) //has top key.
		{
			std::shared_ptr<TreeNode<T>> keyPtr = mRoot;
			while ((data != nullptr) && (keyPtr != nullptr))
			{
				if ((keyPtr->Left == nullptr) && (keyPtr->Right == nullptr))
				{
					if (*(keyPtr->Data) < *data)
					{
						keyPtr->Right = std::make_shared<TreeNode<T>>(std::move(data));
						keyPtr = nullptr;
					}
					else
					{
						keyPtr->Left = std::make_shared<TreeNode<T>>(std::move(data));
						keyPtr = nullptr;
					}
				}
				else if ((keyPtr->Left != nullptr) && (keyPtr->Right == nullptr))
				{
					if (*(keyPtr->Data) <= *data)
					{
						keyPtr->Right = std::make_shared<TreeNode<T>>(std::move(data));
						keyPtr = nullptr;
					}
					else
					{
						keyPtr = keyPtr->Left;
					}
				}
				else if ((keyPtr->Left == nullptr) && (keyPtr->Right != nullptr))
				{
					if (*(keyPtr->Data) > *data)
					{
						keyPtr->Left = std::make_shared<TreeNode<T>>(std::move(data));
						keyPtr = nullptr;
					}
					else
					{
						keyPtr = keyPtr->Right;
					}
				}
				else if ((keyPtr->Left != nullptr) && (keyPtr->Right != nullptr))
				{
					if (*(keyPtr->Data) >= *data)
					{
						keyPtr = keyPtr->Left;
					}
					else if (*(keyPtr->Data) < *data)
					{
						keyPtr = keyPtr->Right;
					}
				}
			}
		}
	}

	template<typename T>
	bool BinarySearchTree<T>::Search(const T& data)
	{
		if (mRoot == nullptr)
		{
			return false;
		}
		else if (mRoot != nullptr)
		{
			std::shared_ptr<TreeNode<T>> target;
			target = mRoot;
			while (target != nullptr)
			{
				if (*(target->Data) > data)
				{
					if (target->Left != nullptr)
					{
						target = target->Left;
					}
					else
					{
						return false;
					}
				}
				else if (*(target->Data) < data)
				{
					if (target->Right != nullptr)
					{
						target = target->Right;
					}
					else
					{
						return false;
					}
				}
				else if (*(target->Data) == data)
				{
					return true;
				}
			}
		}
		return false;
	}

	template<typename T>
	bool BinarySearchTree<T>::Delete(const T& data)
	{
		bool bSearched = Search(data);
		if (bSearched == true)
		{
			std::shared_ptr<TreeNode<T>> target;
			target = mRoot;
			while (target != nullptr)
			{
				if (*(target->Data) == data)
				{
					if ((target->Left == nullptr) && (target->Right == nullptr)) // has no child.
					{
						target = nullptr;
					}
					else if ((target->Left != nullptr) && (target->Right != nullptr)) //has two children.
					{
						if (target->Right->Left != nullptr && target->Right->Right != nullptr) // has two children.
						{

						}
						else if (target->Right->Left != nullptr && target->Right->Right != nullptr) // has 0 child.
						{

						}
						else // has 1 child.
						{

						}
					}
					else //has a child.
					{
						if (target->Left != nullptr)
						{
							if (target->Parent.lock()->Left == target)
							{
								target->Parent.lock()->Left == target->Left;
							}
							else if (target->Parent.lock()->Right == target)
							{
								target->Parent.lock()->Right == target->Left;
							}
						}
						else if (target->Right != nullptr)
						{
							if (target->Parent.lock()->Left == target)
							{
								target->Parent.lock()->Left == target->Right;
							}
							else if (target->Parent.lock()->Right == target)
							{
								target->Parent.lock()->Right == target->Right;
							}
						}
					}
				}
				else if (*(target->Data) != data)
				{

				}
			}

			return true;
		}
		else if (bSearched == false)
		{
			return false;
		}
		return false;
	}


	template<typename T>
	const std::weak_ptr<TreeNode<T>> BinarySearchTree<T>::GetRootNode() const
	{
		return mRoot;
	}


	template<typename T>
	std::vector<T> BinarySearchTree<T>::TraverseInOrder(const std::shared_ptr<TreeNode<T>> startNode)
	{
		std::vector<T> leftSide;
		std::vector<T> rightSide;
		if (startNode == nullptr)
		{
			return leftSide;
		}

		if (startNode != nullptr && startNode != nullptr)
		{
			leftSide = TraverseInOrder(startNode->Left);
			leftSide.push_back(*(startNode->Data));
			rightSide = TraverseInOrder(startNode->Right);
			leftSide.insert(leftSide.end(), rightSide.begin(), rightSide.end());
		}
		return leftSide;
	}
}