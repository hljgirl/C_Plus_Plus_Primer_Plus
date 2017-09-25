// 程序清单7.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

void cheers(int);
double cube(double);

int main()
{
	cheers(5);

	cout << "Give me a number: ";
	double side;
	cin >> side;

	double volume = cube(side);

	cout << "A " << side << "-foot cube has a volume of ";
	cout << volume << " cubic feet.\n";

	cheers(cube(2));

	system("pause");
	return 0;
}


void cheers(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers! ";
	}
	cout << endl;
}


double cube(double x)
{	
	return x*x*x;
}