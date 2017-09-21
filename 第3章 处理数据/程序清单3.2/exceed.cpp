// 程序清单3.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <climits>

#define ZERO 0

using namespace std;

int main()
{
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	cout << "Add $1 to each account." << endl << "Now ";

	sam += 1;
	sue += 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;


	sam -= 1;
	sue -= 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	cout << "Lucky Sue!" << endl;


	system("pause");
	return 0;
}

