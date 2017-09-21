// 程序清单5.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	int x;

	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;

	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;

	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;

	cout.setf(ios_base::boolalpha);

	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;

	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;


	system("pause");
	return 0;
}

