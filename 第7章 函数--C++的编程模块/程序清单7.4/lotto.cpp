// 程序清单7.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

long double probability(unsigned int, unsigned int);

int main()
{
	double total, choices;

	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";

	while ((cin>>total>>choices) && choices<=total)
	{
		cout << "You have on change in ";
		cout << probability(total, choices);
		cout << " of winning.\n";
		cout << "Next two numbers(q to quit)";
	}

	cout << "Bye!\n";

	system("pause");
	return 0;
}

long double probability(unsigned int number, unsigned int pick)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = number, p = pick; p > 0; n--, p--)
	{
		result *= n / p;
	}

	return result;
}