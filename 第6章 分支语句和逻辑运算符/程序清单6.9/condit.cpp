// 程序清单6.9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	int a, b;
	cout << "Enter two integers: ";

	cin >> a >> b;

	cout << "The larger of " << a << " and " << b;

	int c = a > b ? a : b;

	cout << " is " << c << endl;



	system("pause");
	return 0;
}

