#include "FixedVector.h"
#include <algorithm>

namespace lab6
{
	template<class T, size_t N>
	FixedVector::FixedVector()
	{
	}

	template<class T, size_t N>
	FixedVector::const T& Get(unsigned int index) const
	{
		return v.Get(index); // how to get v?
	}

	FixedVector::T& operator[](unsigned int index)
	{
	}

	FixedVector::int GetIndex(const T& t) const
	{
		t.
	}

	FixedVector::size_t GetSize() const
	{
	}
	
	FixedVector::size_t GetCapacity() const
	{
	}

	FixedVector::bool Add(const T& t)
	{
	}

	FixedVector::bool Remove(const T& t)
	{
		__.find(t);
	}

	FixedVector::~FixedVector()
	{
	}
}