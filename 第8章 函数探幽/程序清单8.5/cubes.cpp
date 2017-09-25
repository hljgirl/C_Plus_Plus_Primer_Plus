

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

double cube(double a);
double refcube(double& a);

int main()
{

	double x = 3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;

	cout << refcube(x);
	cout << " = cube of " << x << endl;

	system("pause");
	return 0;
}


double cube(double a)
{
	a *= a * a;
	return a;
}


double refcube(double& a)
{
	a *= a * a;
	return a;
}