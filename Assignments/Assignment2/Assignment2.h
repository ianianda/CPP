#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <list>
#include <iterator>
#include <string>

namespace assignment2
{
	template <typename K, class V>
	using MapIterator = typename std::map<K, V>::const_iterator;

	template <typename K, class V>
	std::map<K, V> ConvertVectorsToMap(const std::vector<K>& keys, const std::vector<V>& data)
	{
		std::map<K, V> mapInserted;
		int length = 0;
		if (keys.size() < data.size())
		{
			length = keys.size();
		}
		else
		{
			length = data.size();
		}

		for (int i = 0; i < length; i++)
		{
			if (i == 0)
			{
				mapInserted.insert(std::make_pair(keys.at(i), data.at(i)));
			}

			for (unsigned int j = 0; j < mapInserted.size(); j++)
			{
				if (mapInserted.find(keys.at(i)) == mapInserted.end())
				{
					mapInserted.insert(std::make_pair(keys.at(i), data.at(i)));
				}
			}
		}
		return mapInserted;
	}

	template <typename K, class V>
	std::vector<K> GetKeys(const std::map<K, V>& m)
	{
		std::vector<K> keys;
		MapIterator<K, V> it;

		for (it = m.begin(); it != m.end(); it++)
		{
			keys.push_back(it->first);
		}

		return keys;
	}

	template <typename K, class V>
	std::vector<V> GetValues(const std::map<K, V>& map)
	{
		MapIterator<K, V> it;
		std::vector<V> result;

		for (it = map.begin(); it != map.end(); ++it)
		{
			result.push_back(it->second);
		}
		return result;
	}

	template <typename T>
	std::vector<T> Reverse(const std::vector<T>& v)
	{
		std::vector<T> copyV;
		copyV.assign(v.begin(), v.end());
		std::reverse(copyV.begin(), copyV.end());
		return copyV;
	}
}

template <typename K, class V>
using MapIterator = typename std::map<K, V>::const_iterator;

template <typename T>
std::vector<T> operator+(const std::vector<T>& v1, const std::vector<T>& v2)
{
	std::vector<T> newVector;
	std::vector<T> copyVector;

	for (unsigned i = 0; i < v2.size(); ++i)
	{
		copyVector.push_back(v2.at(i));
	}

	for (unsigned int i = 0; i < v1.size(); i++)
	{
		newVector.push_back(v1.at(i));
	}

	for (unsigned int i = 0; i < newVector.size(); i++)
	{
		for (unsigned int j = 0; j < copyVector.size(); j++)
		{
			if (newVector.at(i) == copyVector.at(j))
			{
				copyVector.erase(copyVector.begin() + j);
			}
		}
	}

	for (unsigned int i = 0; i < copyVector.size(); i++)
	{
		newVector.push_back(copyVector.at(i));
	}

	return newVector;
}

template <typename K, class V>
std::map<K, V> operator+(const std::map<K, V>& m1, const std::map<K, V>& m2)
{
	std::map<K, V> newMap;
	std::map<K, V> copyMap;
	newMap.insert(m1.begin(), m1.end());
	copyMap.insert(m2.begin(), m2.end());

	MapIterator<K, V> it;
	MapIterator<K, V> ip;

	for (it = newMap.begin(); it != newMap.end(); it++)
	{
		for (ip = copyMap.begin(); ip != copyMap.end(); ip++)
		{
			if ((it->first) == (ip->first))
			{
				ip = copyMap.erase(ip);
			}
		}
	}
	newMap.insert(copyMap.begin(), copyMap.end());

	return copyMap;
}

template<typename t>
std::ostream& operator<<(std::ostream& os, const std::vector<t>& v)
{
	os << v.at(0) << "";
	for (unsigned int i = 1; i < v.size(); i++)
	{
		os << ", " << v.at(i);
	}
	return os; //return a reference to the ostream object
}

template <typename K, class V>
std::ostream& operator<<(std::ostream& os, const std::map<K, V>& m)
{
	for (const auto& p : m)
	{
		os << "{ " << p.first << ", ";
		//for(int x: p.second) os<<x<<'';
		os << p.second << " }";
		os << std::endl;
	}
	return os;
}