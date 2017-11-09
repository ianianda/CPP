#pragma once

namespace lab6
{
	template<class T, size_t N>
	class FixedVector
	{
	public:
		FixedVector();
		~FixedVector();
		const T& Get(unsigned int index) const;
		T& operator[](unsigned int index);
		int GetIndex(const T& t) const;
		size_t GetSize() const;
		size_t GetCapacity() const;
		bool Add(const T& t);
		bool Remove(const T& t);

	private:
		T mArray[N];
		size_t mSize;
	};

	template<class T, size_t N>
	FixedVector<T, N>::FixedVector()
		: mSize(0)
	{
	}

	template<class T, size_t N>
	FixedVector<T, N>::~FixedVector()
	{
	}

	template<class T, size_t N>
	const T& FixedVector<T, N>::Get(unsigned int index) const
	{
		return mArray[index];
	}

	template<class T, size_t N>
	T& FixedVector<T, N>::operator[](unsigned int index)
	{
		return mArray[index];
	}

	template<class T, size_t N>
	int FixedVector<T, N>::GetIndex(const T& t) const
	{
		size_t i = 0;
		for (i = 0; i < N; i++)
		{
			if (t == mArray[i])
			{
				return i;
			}
		}
		if (i == N)
		{
			return -1;
		}
		else
		{
			return i;
		}
	}

	template<class T, size_t N>
	size_t FixedVector<T, N>::GetSize() const
	{
		return mSize;
	}

	template<class T, size_t N>
	size_t FixedVector<T, N>::GetCapacity() const
	{
		return N;
	}

	template<class T, size_t N>
	bool FixedVector<T, N>::Add(const T& t)
	{
		if (mSize >= N)
		{
			return false;
		}

		mArray[mSize++] = t;
		return true;
	}

	template<class T, size_t N>
	bool FixedVector<T, N>::Remove(const T& t)
	{
		int target = -1;

		for (size_t i = 0; i < N; i++)
		{
			if (t == mArray[i])
			{
				target = (int)i;
			}
		}

		if (target == -1)
		{
			return false;
		}

		for (size_t i = target; i < N - 1; i++)
		{
			mArray[i] = mArray[i + 1];
		}
		mArray[N - 1] = (int)nullptr;
		mSize--;
		return true;
	}
}