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
		//node_ptr->Next = nullptr;

		if (mRoot == nullptr)
		{
			node_ptr = std::make_shared<Node<T>>(std::move(data));
		}
		else //mRoot != nullptr
		{
			do
			{
				node_ptr = node_ptr->Next;
			} while (node_ptr->Next != nullptr);

			node_ptr = std::make_shared<Node<T>>(std::move(data));
		}
		length++;
	}

	template<typename T>
	void DoublyLinkedList<T>::Insert(std::unique_ptr<T> data, unsigned int index)
	{
		std::shared_ptr<Node<T>> temp;
		//temp = make_shared<Node<T>>(std::move(data));
		unsigned int i = 0;

		// list is empty
		if (mRoot == nullptr)
		{
			mRoot = make_shared<Node<T>>(std::move(data));
			length++;
		}
		else // list is not empty
		{
			if (index == 0)
			{
				temp = mRoot;
				mRoot->Next = temp;
				temp->Previous = mRoot;
				length++;
			}
			else if (index >= length)
			{
				Insert(std::move(data));
			}
			else// index < length
			{
				do
				{
					//temp = mRoot->Previous.lock();

					i++;
					mRoot = mRoot->Next;
				} while (i < index);

				mRoot = make_shared<Node<T>>(std::move(data));
				length++;
			}
		}
	}

	template<typename T>
	bool DoublyLinkedList<T>::Delete(const T& data)
	{
		std::shared_ptr<Node<T>> temp;
		if (mRoot != nullptr)
		{
			if (*(mRoot->Data) == data) // delete head
			{
				mRoot = nullptr;
				mRoot = mRoot->Next;
				return true;
			}
			else // head is not the deleted one
			{
				while (mRoot->Next != nullptr)
				{
					temp = mRoot->Next;
					if (*(temp->Data) == data)
					{
						return true;
					}
				}
			}
		}
		return false; //list does not have any node.
	}

	template<typename T>
	bool DoublyLinkedList<T>::Search(const T& data) const
	{
		std::shared_ptr<Node<T>> temp;
		temp = mRoot;
		do
		{
			if (temp->Data == data)
			{
				return true;
			}
			else
			{
				temp = temp->Next;
			}
		} while (temp != nullptr);
	
		return false;
	}

	template<typename T>
	std::shared_ptr<Node<T>> DoublyLinkedList<T>::operator[](unsigned int index) const
	{
		std::shared_ptr<Node<T>> temp;
		if (index < length)
		{
			for (unsigned int i = 0; i < index; i++)
			{
				temp = mRoot->Next;
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