#include "Lab2.h"

#include <iostream>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

namespace lab2
{
	float maxValue = -LLONG_MAX;

	void PrintIntegers(std::istream& in, std::ostream& out)
	{
		int number = NULL;

		cout << setw(12) << right << "oct";
		cout << setw(11) << right << "dec";
		cout << setw(9) << right << "hex" << endl;
		cout << setw(13) << left << "------------";
		cout << setw(11) << left << "----------";
		cout << "--------" << endl;

		while (true) {
			in >> number;

			if (in.eof()) {
				break;
			}

			if (in.fail()) {
				in.clear();
				in.ignore(LLONG_MAX, ' ');
				continue;
			}

			cout << setw(12) << right << oct << number;
			cout << setw(11) << right << dec << number; 
			cout << uppercase << setw(9) << right << hex << number << endl;

		}
		in.clear();
	}

	void PrintMaxFloat(std::istream& in, std::ostream& out)
	{
		float number = NULL;

		while (true) {
			in >> number;

			if (in.eof()) {
				break;
			}

			if (in.fail()) {
				in.clear();
				in.ignore(LLONG_MAX, ' ');
				continue;
			}

			cout << "     " << showpos << setw(14) << internal << showpoint << setprecision(3) << fixed << number << endl;
			
		}

		if (number > maxValue) {
			maxValue = number;
		}

		cout << setw(6) << left << "max:";
		cout << setw(14) << showpos << setw(14) << maxValue << endl;
		in.clear();
	}
}