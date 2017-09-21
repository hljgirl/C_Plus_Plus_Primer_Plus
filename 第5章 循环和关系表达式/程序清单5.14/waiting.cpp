// 程序清单5.14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
	cout << "Enter the delay time, in seconds: ";
	float secs;

	cin >> secs;

	clock_t delay = secs * CLOCKS_PER_SEC;

	cout << "starting\a\n";

	clock_t start = clock();

	while (clock() - start < delay)
	{
		
	}

	cout << "Done!\a\n";

	system("pause");
	return 0;
}

