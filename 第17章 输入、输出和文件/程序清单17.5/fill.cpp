// 程序清单17.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	cout.fill('*');
	const char * staff[2] = {"Waldo Whipsnade", "Wilmarie Wooper"};

	long bonus[2] = {900, 1350};

	for (int i = 0; i < 2; i++)
	{
		cout << staff[i] << ": $";
		cout.width(7);
		cout << bonus[i] << "\n";
	}

	system("pause");
	return 0;

}

