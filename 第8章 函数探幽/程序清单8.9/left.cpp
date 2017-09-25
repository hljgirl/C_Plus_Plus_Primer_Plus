// 程序清单8.9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

const int ArSize = 80;
char * left(const char * str, int n = 1);


int main()
{

	char sample[ArSize];
	cout << "Enter a string: \n";
	cin.get(sample, ArSize);

	char *ps = left(sample, 4);
	cout << ps << endl;

	ps = left(sample);
	cout << ps << endl;


	system("pause");
	return 0;
}

char * left(const char * str, int n)
{
	if (n < 0)
	{
		n = 0;
	}

	char *p = new char[n + 1];

	int i;

	for ( i = 0; i < n && str[i]; i++)
	{
		p[i] = str[i];
	}

	while (i <= n)
	{
		p[i++] = '\0';
	}

	return p;
}
