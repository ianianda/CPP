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
		out << setw(12) << uppercase << "oct";
		out << setw(11) << "dec";
		out << setw(9) << "hex" << endl;
		out << setw(13) << setfill('-') << "-";
		out << setw(11) << " ";
		out << setw(9) << "-" << endl;
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

			out << setw(12) << oct << number;
			out << setw(11) << dec << number;
			out << setw(9) << hex << number << endl;
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

			out << setw(5) << " ";
			out << showpos<< setw(20) << internal << showpoint << setprecision(3) << fixed << number << endl;

			if (number > maxValue)
			{
				maxValue = number;
			}
		}

		out << "max: " << showpos << setw(14) << internal << maxValue << endl;
		in.clear();
	}
}