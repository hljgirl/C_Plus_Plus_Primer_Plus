// 程序清单6.14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

const int Max = 5;

int main()
{
	int golf[Max];

	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n";

	
	int i;

	for ( i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin>>golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Please enter a number: ";
		}
	}
		
	double total = 0.0;
	for ( i = 0; i < Max; i++)
	{
		total += golf[i];
	}

	cout << total / Max << " = average score "
		<< Max << " rounds\n";

	cout << "Done.\n";

	system("pause");
	return 0;
}

