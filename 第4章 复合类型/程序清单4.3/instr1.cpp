// 程序清单4.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
	const int ArSize = 20;

	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name;



	cout << "Enter your favorite dessert:\n";
	cin >> dessert;

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";


	system("pause");
	return 0;
}

