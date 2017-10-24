// 程序清单17.12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <exception>

using namespace std;

int main()
{
	cin.exceptions(ios_base::failbit);

	cout << "Enter numbers: ";
	int sum = 0;
	int input;

	try
	{
		while (cin>>input)
		{
			sum += input;
		}
	}
	catch (ios_base::failure& bf)
	{
		cout << bf.what() << endl;
		cout << "O! the horror!\n";
	}

	cout << "Last value entered = " << input << endl;
	cout << "Sum = " << sum << endl;

	system("pause");
    return 0;
}

