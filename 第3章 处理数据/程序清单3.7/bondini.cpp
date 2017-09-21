// 程序清单3.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout << "\aOperation \"HyperHyer\" is now activated!\n";
	cout << "Enter your agent code :________\b\b\b\b\b\b\b\b";

	long code;
	cin >> code;

	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";

	system("pause");
	return 0;
}

