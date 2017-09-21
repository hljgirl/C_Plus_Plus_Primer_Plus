// 程序清单5.18.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	char ch;
	int count = 0;

	cout << "Enter characters; enter Ctrl+Z to quit:\n";
	cin.get(ch);

	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}