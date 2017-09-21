// 程序清单3.11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "Integer division : 9/5 = " << 9 / 5 << endl;
	cout << "Floating-point division : 9.0/5.0 = " << 9.0 / 5.0 << endl;
	cout << "Mixed division : 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants : 1e7/9.0 = " << 1.0e7 / 9.0 << endl;
	cout << "float constants : 1e7f/9.0f = " << 1.0e7f / 9.0f << endl;

	system("pause");
	return 0;
}

