// 程序清单5.15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	int n;

	cout << "Enter numbers in the range 1 - 10 to find ";
	cout << "my favorite number\n";

	do 
	{
		cin >> n;
	} while (n != 7);

	cout << "Yes, 7 is my favorite.\n";



	system("pause");
	return 0;
}

