// 程序清单15.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double hmean(double, double);

int main()
{

	abort();

	double x, y, z;

	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		z = hmean(x, y);
		cout << "Harmonic mean of " << x << " and " << y
			<< " is " << z << endl;

		cout << "Enter next set of numbers <q to quit>: ";
	}


	cout << "Bye!\n";
	system("pause");
    return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
	{
		cout << "untenable arguments to hmean()\n";
		abort();
	}

	return 2.0 * a*b / (a + b);
}