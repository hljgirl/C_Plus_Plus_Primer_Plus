// 程序清单15.9.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>

using namespace std;

double hmean(double, double);

int main()
{

	double x, y, z = 0;

	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);			
		}
		catch (const char * s)
		{
			cout << s << endl;
			cout << "Enter a new pair of numbers: ";
			continue;
		}

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
		throw "bad hmean() arguments: a = -b not allowed";
	}

	return 2.0 * a*b / (a + b);
}