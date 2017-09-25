// 程序清单7.9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

unsigned int c_in_str(const char *, char);

int main()
{
	system("color 0A");

	char mmm[15] = "minimum";
	char *wail = "ululate";

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');

	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;


	system("pause");
	return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
	unsigned int count = 0;

	while (*str)
	{
		if (*str == ch)
		{
			count++;			
		}

		str++;
	}

	return count;
}