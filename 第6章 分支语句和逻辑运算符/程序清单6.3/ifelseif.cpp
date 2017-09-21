// 程序清单6.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

const int Fave = 27;

int main()
{
	int n;

	cout << "Enter a number in the range 1 - 100 to find. ";
	cout << "My favorite number: ";

	do 
	{
		cin >> n;

		if (n < Fave)
		{
			cout << "Too low -- guess again: ";
		}
		else if (n > Fave)
		{
			cout << "Too high -- guess again: ";
		}
		else
		{
			cout << Fave << " is right!\n";
		}

	} while (n != Fave);



	system("pause");
	return 0;
}

