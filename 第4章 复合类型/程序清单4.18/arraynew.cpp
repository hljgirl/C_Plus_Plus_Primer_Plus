// 程序清单4.18.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

	double *p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1;
	cout << "p3[0] is " << p3[0] << ".\n";
	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 - 1;

	delete[] p3;

	system("pause");
	return 0;
}

