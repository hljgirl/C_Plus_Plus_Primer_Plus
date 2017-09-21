// 程序清单4.17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int nights = 1001;
	int *pt = new int;
	*pt = 1001;

	cout << "nights value = " << nights << ": location " << &nights << endl;
	cout << "int value = " << *pt << ": location " << pt << endl;

	double *pd = new double;
	*pd = 100000001.0;
	cout << "double value = " << *pd << ": location " << pd << endl;

	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof pt;
	cout << ": size of *pt = " << sizeof *pt << endl;

	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof *pd << endl;


	delete pt;
	delete pd;

	system("pause");
	return 0;
}

