// 程序清单17.9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout.setf(ios_base::left, ios_base::adjustfield);
	cout.setf(ios_base::showpos);
	cout.setf(ios_base::showpoint);
	cout.precision(3);

	ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Left Justification:\n";
	
	for (int i = 1; i <= 41; i += 10)
	{
		cout.width(4);
		cout << i << "|";
		cout.width(12);
		cout << sqrt(double(i)) << "|\n";
	}

	cout.setf(ios_base::internal, ios_base::adjustfield);
	cout.setf(old, ios_base::floatfield);

	cout << "Internal Justification:\n";
	for (int i = 1; i <= 41; i += 10)
	{
		cout.width(4);
		cout << i << "|";
		cout.width(12);
		cout << sqrt(double(i)) << "|\n";
	}

	cout.setf(ios_base::right, ios_base::adjustfield);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Right Justification:\n";
	for (int i = 1; i <= 41; i += 10)
	{
		cout.width(4);
		cout << i << "|";
		cout.width(12);
		cout << sqrt(double(i)) << "|\n";
	}

	system("pause");
    return 0;
}

