// 程序清单9.9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;


const int ArSize = 10;

void strcount(const char * str);

int main()
{
	char input[ArSize];
	char next;

	cout << "Enter a line:\n";
	cin.get(input, ArSize);

	while (cin)
	{
		cin.get(next);

		while (next != '\n')
		{
			cin.get(next);
		}

		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		cin.get(input, ArSize);
	}

	cout << "Bye\n";

	system("pause");
	return 0;
}



void strcount(const char * str)
{
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	while (*str++)
	{
		count++;
	}

	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
