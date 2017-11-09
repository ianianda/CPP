#include "FixedVector.h"
#include <iostream>

int main()
{
	lab6::FixedVector<int, 10> numbers;
	numbers.Add(0);
	numbers.Add(1);
	numbers.Add(2);
	numbers.Add(3);
	numbers.Add(4);
	numbers.Add(5);
	numbers.Add(6);
	numbers.Add(7);
	numbers.Add(8);
	numbers.Add(9);
	numbers.Remove(1);

	std::cout << numbers[0] << std::endl;

	return 0;
}