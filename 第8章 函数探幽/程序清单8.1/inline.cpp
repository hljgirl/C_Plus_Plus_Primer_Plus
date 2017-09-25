// 程序清单8.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

inline double square(double x) { return x*x; };

int main()
{
	double a, b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5);

	cout << "a = " << a << ", b = " << b << endl;
	cout << "c = " << c;
	cout << ", C squared = " << square(c++) << endl;
	cout << "Now c = " << c << endl;

	system("pause");
	return 0;
}

