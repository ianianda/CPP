#include "Assignment2.h"
#include <iostream>
#include <string>

using namespace assignment2;

int main()
{
	std::vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	std::vector<char> v2;
	v2.push_back('a');
	v2.push_back('b');
	v2.push_back('c');
	v2.push_back('D');

	std::vector<int> v3;
	v3.push_back(4);
	v3.push_back(5);
	v3.push_back(6);

	std::map<char, int> m1;
	m1['a'] = 1;
	m1['b'] = 2;
	m1['c'] = 3;
	m1['d'] = 4;

	std::map<char, int> m2;
	m2['d'] = 4;
	m2['a'] = 5;
	m2['f'] = 6;

	std::map<int, char> m = ConvertVectorsToMap(v1, v2);
	std::vector<char> keys = GetKeys(m1);
	std::vector<int> values = GetValues(m1);
	std::vector<int> reversedV1 = Reverse(v1);
	std::vector<int> combinedVector = v1 + v3;
	std::map<char, int> combinedMap = m1 + m2;
	std::cout << v1 << std::endl;
	std::cout << m1 << std::endl;

	return 0;
}