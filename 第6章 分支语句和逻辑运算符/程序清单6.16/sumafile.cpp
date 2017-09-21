// 程序清单6.16.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

const int SIZE_N = 60;

int main()
{

	char filename[SIZE_N];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE_N);

	inFile.open(filename);

	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;


	inFile >> value;
	while (inFile.good())
	{
		count++;
		sum += value;
		inFile >> value;
	}

	if (inFile.eof())
	{
		cout << "End of file reached.\n";
	}else if (inFile.fail())
	{
		cout << "Input terminated by data mismatch.\n";
	}
	else
	{
		cout << "Input terminated for unknown reason.\n";
	}

	if (count == 0)
	{
		cout << "No data processed.\n";
	}
	else
	{
		cout << "Item read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}


	inFile.close();

	system("pause");
	return 0;
}

