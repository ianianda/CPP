#include <iostream>
#include "Add.h"

using namespace std;

int main()
{
	int lab1::Add(int a, int b);
}

int lab1::Add(int a, int b)
{
	int c = a + b;

	cout << "Enter two numbers to add\n";
	cin >> a >> b;

	cout << "Sum of entered numbers = " << c << endl;

	return 0;
}
