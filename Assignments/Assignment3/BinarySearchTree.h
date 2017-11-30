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
	void Insert(std::unique_ptr<T> data)
	{

	}

	template<typename T>
	bool Search(const T& data)
	{

	}

	template<typename T>
	bool Delete(const T& data)
	{

	}

	template<typename T>
	const std::weak_ptr<TreeNode<T>> GetRootNode() const
	{

	}

	template<typename T>
	static std::vector<T> TraverseInOrder(const std::shared_ptr<TreeNode<T>> startNode)
	{

	}
	
}