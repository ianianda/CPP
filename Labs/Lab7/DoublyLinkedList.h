#pragma once
#include <memory>

namespace lab7
{
	template<typename T>
	class Node;

	template<typename T>
	class DoublyLinkedList
	{
	public:
		DoublyLinkedList();
		void Insert(std::unique_ptr<T> data);
		void Insert(std::unique_ptr<T> data, unsigned int index);
		bool Delete(const T& data);
		bool Search(const T& data) const;

		std::shared_ptr<Node<T>> operator[](unsigned int index) const;
		unsigned int GetLength() const;

	private:
		std::shared_ptr<Node<T>> mRoot;
		unsigned int length;
	};

	// Add implementations of public methods here.
	template<typename T>
	DoublyLinkedList<T>::DoublyLinkedList()
		: length(0)
		, mRoot(nullptr)
	{
	}

	template<typename T>
	void DoublyLinkedList<T>::Insert(std::unique_ptr<T> data)
	{
		std::shared_ptr<Node<T>> node_ptr = mRoot;
		if (mRoot == nullptr)
		{
			mRoot = std::make_shared<Node<T>>(std::move(data));
			length++;
		}
		else //mRoot != nullptr
		{
			if (node_ptr->Next == nullptr)
			{
				mRoot->Next = std::make_shared<Node<T>>(std::move(data));
				mRoot->Next->Previous = mRoot;
				length++;
			}
			else
			{
				do
				{
					node_ptr = node_ptr->Next;
				}
				while (node_ptr->Next != nullptr);
				node_ptr->Next = std::make_shared<Node<T>>(std::move(data));
				node_ptr->Next->Previous = node_ptr;
				length++;
			}
		}
	}

	template<typename T>
	void DoublyLinkedList<T>::Insert(std::unique_ptr<T> data, unsigned int index)
	{
		std::shared_ptr<Node<T>> temp;

		unsigned int i = 0;

		// list is empty
		if (mRoot == nullptr)
		{
			mRoot = std::make_shared<Node<T>>(std::move(data));
			length++;
		}
		else // list is not empty
		{
			if (index == 0)
			{
				temp = std::make_shared<Node<T>>(std::move(data));
				mRoot->Previous = temp;
				temp->Next = mRoot;
				mRoot = temp;
				length++;
			}
			else if (index >= length)
			{
				Insert(std::move(data));
			}
			else // index < length
			{
				temp = mRoot;
				do
				{
					i++;
					temp = temp->Next;
				}
				while (i < index);

				std::shared_ptr<Node<T>> addPos;
				std::shared_ptr<Node<T>> addPosPrev;
				std::shared_ptr<Node<T>> newNode;

				newNode = std::make_shared<Node<T>>(std::move(data));
				addPosPrev = temp->Previous.lock();
				addPosPrev->Next = newNode;
				newNode->Previous = addPosPrev;
				newNode->Next = temp;
				temp->Previous = newNode;

				length++;
			}
		}
	}

	template<typename T>
	bool DoublyLinkedList<T>::Delete(const T& data)
	{
		std::shared_ptr<Node<T>> temp;
		std::shared_ptr<Node<T>> temp2;
		if (mRoot == nullptr) // list is empty
		{
			return false;
		}
		else if (mRoot != nullptr) // list is not empty
		{
			temp = mRoot;
			while (temp != nullptr)
			{
				if (*(temp->Data) == data)
				{
					if ((temp->Previous.lock() == nullptr) && (temp->Next == nullptr)) // data == head
					{
						mRoot = nullptr;
						length--;
						return true;
					}
					else if ((temp->Previous.lock() == nullptr) && (temp->Next != nullptr))
					{
						mRoot = temp->Next;
						length--;
						return true;
					}
					else if (((temp->Previous.lock()) != nullptr) && ((temp->Next) != nullptr))
					{
						temp2 = temp->Previous.lock();
						temp2->Next = temp->Next;
						temp->Next->Previous = temp2;
						length--;
						return true;
					}
				}
				else if (*(temp->Data) != data)
				{
					if (temp->Next != nullptr)
					{
						temp = temp->Next;
					}
					else if (temp->Next == nullptr)
					{
						return false;
					}
				}
			}
		}
		return false;
	}

	template<typename T>
	bool DoublyLinkedList<T>::Search(const T& data) const
	{
		if (mRoot == nullptr)
		{
			return false;
		}

		std::shared_ptr<Node<T>> temp;
		temp = mRoot;

		do
		{
			if (*(temp->Data) == data)
			{
				return true;
			}
			else if (temp->Next == nullptr)
			{
				return false;
			}
			temp = temp->Next;
		}
		while (temp->Next != nullptr);
		return false;
	}

	template<typename T>
	std::shared_ptr<Node<T>> DoublyLinkedList<T>::operator[](unsigned int index) const
	{
		if (mRoot == nullptr)
		{
			return nullptr;
		}

		std::shared_ptr<Node<T>> temp = mRoot;
		if (index < length)
		{
			for (unsigned int i = 0; i < index; i++)
			{
				temp = temp->Next;
			}
			return temp;
		}
		else
		{
			return nullptr;
		}
	}

	template<typename T>
	unsigned int DoublyLinkedList<T>::GetLength() const
	{
		return length;
	}
}