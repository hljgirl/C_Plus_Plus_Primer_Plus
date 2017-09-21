// 程序清单5.19.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	int ch;
	int count = 0;

	cout << "Enter characters; enter Ctrl+Z to quit:\n";


	while ((ch = cin.get()) != EOF)
	{
		cout.put((char)ch);
		++count;
	}

	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}