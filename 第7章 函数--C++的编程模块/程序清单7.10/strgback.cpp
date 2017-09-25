// 程序清单7.10.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

char * buildstr(char, int);

int main()
{
	system("color 0A");

	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;

	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete ps;

	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps << endl;
	delete ps;


	system("pause");
	return 0;
}

char * buildstr(char ch, int n)
{
	char * pstr = new char[n + 1];
	pstr[n] = '\0';

	while (n-- > 0)
	{
		pstr[n] = ch;
	}

	return pstr;
}