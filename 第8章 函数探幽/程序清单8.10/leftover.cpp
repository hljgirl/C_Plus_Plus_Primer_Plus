// 程序清单8.10.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);


int main()
{

	char *trip = "Hawaii!!";
	unsigned long n = 12345678;

	char * temp;

	for (int i = 0; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
	}


	system("pause");
	return 0;
}

unsigned long left(unsigned long num, unsigned ct)
{
	unsigned digit = 1;
	unsigned long n = num;

	if (ct == 0 || num == 0)
	{
		return 0;
	}

	while (n /= 10)
	{
		digit++;
	}

	if (digit > ct)
	{
		ct = digit - ct;
		while (ct--)
		{
			num /= 10;
		}
		return num;
	}
	else
	{
		return num;
	}

}

char * left(const char * str, int n)
{
	if (n < 0)
	{
		n = 0;
	}

	char *p = new char[n + 1];

	int i;

	for (i = 0; i < n && str[i]; i++)
	{
		p[i] = str[i];
	}

	while (i <= n)
	{
		p[i++] = '\0';
	}

	return p;
}

