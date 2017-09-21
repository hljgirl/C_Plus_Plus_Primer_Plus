// 程序清单3.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (decimal for 42)\n";

	cout << hex;
	cout << "waist = " << waist << " (hexadecimal for 42)\n";

	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)\n";



	system("pause");
	return 0;
}