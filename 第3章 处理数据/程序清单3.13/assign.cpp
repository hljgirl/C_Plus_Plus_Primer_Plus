// 程序清单3.13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);


	float tree = 3;
	int guess(3.9832);
	int debt = 7.2E12;

	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;



	system("pause");
	return 0;
}

