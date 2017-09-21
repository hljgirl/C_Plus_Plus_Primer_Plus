// 程序清单5.16.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	char ch;
	int count = 0;

	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;

	while (ch != '#')
	{
		cout << ch ;
		++count;
		cin >> ch;
	}

	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}

