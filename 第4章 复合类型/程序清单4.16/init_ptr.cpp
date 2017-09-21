// 程序清单4.16.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	int higgens = 5;
	int *pt = &higgens;

	cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << endl;

	system("pause");
	return 0;
}

