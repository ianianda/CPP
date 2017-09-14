#include <iostream>
#include "Add.h"

using namespace std;

int lab1::Add(int a, int b)
{

	cout << "Enter two numbers to add\n";
	cin >> a >> b;

	int c = a + b;

	cout << "Sum of entered numbers = ";

	return c;
}
