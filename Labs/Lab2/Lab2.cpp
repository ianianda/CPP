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
		cout << setw(12) << uppercase << "oct";
		cout << setw(11) << "dec";
		cout << setw(9) << "hex" << endl;
		cout << setw(13) << setfill('-') << "-";
		cout << setw(11) << " ";
		cout << setw(9) << "-" << endl;
		string dump;
		int number;

		while (!in.eof())
		{
			in >> number;

			if (in.eof())
			{
				break;
			}

			if (in.fail())
			{
				in.clear();
				in >> dump;
				continue;
			}

			cout << setw(12) << oct << number;
			cout << setw(11) << dec << number;
			cout << setw(9) << hex << number << endl;
		}
	}

	void PrintMaxFloat(std::istream& in, std::ostream& out)
	{
		std::ios_base::fmtflags ff;
		float number = NULL;

		while (true)
		{
			in >> number;

			if (in.eof())
			{
				break;
			}

			if (in.fail())
			{
				in.clear();
				continue;
			}

			cout << "     " << showpos << setw(14) << internal << showpoint << setprecision(3) << fixed << number << endl;
			if (number > maxValue)
			{
				maxValue = number;
			}
		}

		cout << "max: " << showpos << setw(14) << internal << maxValue << endl;
		in.clear();
	}
}