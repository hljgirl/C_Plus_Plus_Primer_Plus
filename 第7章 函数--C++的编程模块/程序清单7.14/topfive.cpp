// 程序清单7.14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

const int LIST_SIZE = 5;

void display(const string [], int n);

int main()
{
	system("color 0A");

	string list[LIST_SIZE];

	cout << "Enter your " << LIST_SIZE << " favorite astronomical sights: \n";
	for (int i = 0; i < LIST_SIZE; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}

	cout << "Your list: \n";
	display(list, LIST_SIZE);

	system("pause");
	return 0;
}


void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ": " << sa[i] << endl;
	}
}