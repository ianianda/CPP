#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

namespace assignment2
{
	template <typename K, class V>
	std::map<K, V> ConvertVectorsToMap(const std::vector<K>& keys, const std::vector<V>& data)
	{
		// implement ConvertVectorsToMap here
	}

	template <typename K, class V>
	std::vector<K> GetKeys(const std::map<K, V>& m)
	{
		// implement GetKeys here		
	}

	template <typename K, class V>
	std::vector<V> GetValues(const std::map<K, V>& map)
	{
		// implement GetValues here
	}

	template <typename T>
	std::vector<T> Reverse(const std::vector<T>& v)
	{
		// implement Reverse here
	}

}

template <typename T>
std::vector<T> operator+(const std::vector<T>& v1, const std::vector<T>& v2)
{
	// implement operator '+' here
}

template <typename K, class V>
std::map<K, V> operator+(const std::map<K, V>& m1, const std::map<K, V>& m2)
{
	// implement operator '+' here
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
	// implement operator '<<' here
}

template <typename K, class V>
std::ostream& operator<<(std::ostream& os, const std::map<K, V>& m)
{
	// implement operator '<<' here
}
