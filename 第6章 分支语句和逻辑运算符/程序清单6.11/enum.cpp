// 程序清单6.11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

enum MyEnum
{
	red,
	orange,
	yellow,
	green,
	blue,
	violet,
	indigo
};

int main()
{
	cout << "Enter color code (0 - 6): ";
	int code;
	cin >> code;

	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red:
			cout << " Her lips were red.\n";
			break;
		case orange:
			cout << " Her hair was orange.\n";
			break;
		case yellow:
			cout << " Her shoes were yellow.\n";
			break;
		case green:
			cout << " Her nails were green.\n";
			break;
		case blue:
			cout << " Her sweat suit was blue.\n";
			break;
		case violet:
			cout << " Her eyes were violet.\n";
			break;
		case indigo:
			cout << " Her mood was indigo.\n";
			break;
		default:
			break;
		}

		cout << "Enter color code (0 - 6): ";
		cin >> code;

	}


	cout << "Bye!\n";

	system("pause");
	return 0;
}

