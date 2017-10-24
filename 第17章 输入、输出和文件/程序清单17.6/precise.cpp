// 程序清单17.6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float price1 = 20.40;
	float price2 = 1.9 + 8.0 / 9.0;

	cout << "\"Furry Friends\" is $" << price1 << "!\n";
	cout << "\"Fiery Fiends\" is $" << price2 << "!\n";

	cout.precision(2);
	cout << "\"Furry Friends\" is $" << price1 << "!\n";
	cout << "\"Fiery Fiends\" is $" << price2 << "!\n";


	system("pause");
	return 0;
}

