// 程序清单5.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{

	int a = 20;
	int b = 20;

	cout << "a = " << a << ": b = " << b << endl;
	cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
	cout << "a = " << a << ": b = " << b << endl;

	system("pause");
	return 0;
}

