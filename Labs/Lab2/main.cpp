#include "Lab2.h"

#include <iostream>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fileopen;
	fileopen.open("test.txt", ios_base::in);

	lab2::PrintIntegers(fileopen, std::cout);
	//lab2::PrintMaxFloat(std::cin, std::cout);
	
	fileopen.close();
	return 0;

}