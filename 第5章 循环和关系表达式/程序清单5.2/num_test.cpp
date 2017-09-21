// 程序清单5.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	cout << "Enter the starting countdown value: ";

	int limit;
	cin >> limit;

	int i;

	for ( i = limit; i; i--)
	{
		cout << "i = " << i << "\n";
	}

	cout << "Done now that i = " << i << "\n";

	system("pause");
	return 0;
}

