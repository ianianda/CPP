#include "Lab2.h"

#include <iostream>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

namespace lab2
{
	float maxValue = -999;

	void PrintIntegers(std::istream& in, std::ostream& out)
	{
		int number;
		bool flag = true;

		cout << setw(12) << right << "oct";
		cout << setw(11) << right << "dec";
		cout << setw(9) << right << "hex" << endl;
		cout << setw(13) << left << "------------";
		cout << setw(11) << left << "----------";
		cout << "--------" << endl;

			while (!in.eof()) {
				if (in >> number) {

				if (in.good()) {					
					cout << setw(12) << right << oct << number;
					cout << setw(11) << right << dec << number; 			// 123
					cout << setw(9) << right << hex << number << endl; 			// 7b
					in.clear();
				}
				else if ((in.fail())) {
					in.clear();
					in.ignore();
				}
			}
		}
		
	}

	void PrintMaxFloat(std::istream& in, std::ostream& out)
	{
		float number;
		in >> number;

		if (!in.eof()) {
			cout << setw(6) << showpos << setw(14) << number << endl;

			if (number > maxValue) {
				maxValue = number;
			}

			cout << setw(6) << left << "max:";
			cout << setw(14) << showpos << setw(14) << maxValue << endl;
		}
		return;
	}
}
