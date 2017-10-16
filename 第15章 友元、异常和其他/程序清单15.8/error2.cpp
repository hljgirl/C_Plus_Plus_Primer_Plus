// 程序清单15.8.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>

using namespace std;

bool hmean(double, double, double*);

int main()
{
	double x, y, z;

	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		if (hmean(x, y, &z))
		{
			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;
		}
		else
		{
			cout << "One value should not be the negative "
				<< "of the other - try again.\n";
		}

		cout << "Enter next set of numbers <q to quit>: ";
	}


	cout << "Bye!\n";
	system("pause");
    return 0;
}

bool hmean(double a, double b, double* ans)
{
	if (a == -b)
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0 * a*b / (a + b);
		return true;
	}

	
}

