#include "Lab5.h"
#include <map>
#include <vector>
namespace lab5
{
	int result = 0;
	float avg = 0;

	int Sum(const std::vector<int>& v)
	{
		for (int i = 0; i < v.size(); i++)
		{
			result += v.at(i);
		}
		return result;
	}

	int Min(const std::vector<int>& v)
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (result > v.at(i))
			{
				result = v.at(i);
			}
		}
		return result;
	}

	int Max(const std::vector<int>& v)
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (result < v.at(i))
			{
				result = v.at(i);
			}
		}
		return result;
	}

	float Average(const std::vector<int>& v)
	{
		int i = 0;
		result = 0;

		for (i = 0; i < v.size(); i++)
		{
			result += v.at(i);
		}
		avg = result / i; // i or i-1
		return avg;
	}

	int NumberWithMaxOccurrence(const std::vector<int>& v)
	{
	
		std::map<int, int> frequencyMap;
		int maxFrequency = 0;
		int mostFrequentElement = 0;
		for (int x : v)
		{
			int f = ++frequencyMap[x];
			if (f > maxFrequency)
			{
				maxFrequency = f;
				mostFrequentElement = x;
			}
		}

		return mostFrequentElement;
	}
}
