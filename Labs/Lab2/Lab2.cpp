#include "Lab2.h"

#include <iostream>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

namespace lab2
{
	float maxValue = 0;

	void PrintIntegers(std::istream& in, std::ostream& out)
	{
		ios::fmtflags f(out.flags());
		out << setw(12) << uppercase << "oct";
		out << setw(11) << "dec";
		out << setw(9) << "hex" << endl;
		out << setw(12) << setfill('-') << left << "-";
		out << setw(11) << " ";
		out << setw(9) << " " << endl;
		string dump;
		int number;

		while (!in.eof())
		{

			if (!(in >> number))
			{
				in.clear();
				in.ignore();
				continue;
			}
			out << setw(12) << right << setfill(' ') << oct << number;
			out << setw(11) << dec << number;
			out << setw(9) << hex << number << endl;
		}

		out.flags(f);
	}

	void PrintMaxFloat(std::istream& in, std::ostream& out)
	{
		ios::fmtflags f(out.flags());
		float number;
		string dump;

		while (!in.eof())
		{
			if (!(in >> number))
			{
				in.clear();
				in.ignore();
				continue;
			}

			out << setw(5) << setprecision(3) << fixed << " ";
			out << setw(15) << internal << showpos << number << endl;

			if (number > maxValue)
			{
				maxValue = number;
			}
		}



		out << setw(5) << "max: ";
		out << setw(15) << internal << showpos << maxValue << endl;
		out.flags(f);
	}
}