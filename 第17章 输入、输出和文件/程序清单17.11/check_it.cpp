// 程序清单17.11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	cout << "Enter numbers: ";
	int sum = 0;
	int input;

	while (cin>>input)
	{
		sum += input;
	}

	cout << "Last value entered = " << input << endl;
	cout << "Sum = " << sum << endl;

	system("pause");
    return 0;
}

 