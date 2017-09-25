// 程序清单9.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void oil(int x);

int main()
{
	int texas = 31;
	int years = 2011;
	cout << "In main(), texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "In main(), years = " << years << ", &years = ";
	cout << &years << endl;

	oil(texas);

	cout << "In main(), texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "In main(), years = " << years << ", &years = ";
	cout << &years << endl;

	system("pause");
    return 0;
}

void oil(int x)
{
	int texas = 5;
	cout << "In oil(), texas = " << texas << ", &texas = ";
	cout << &texas << endl;

	cout << "In oil(), x = " << x << ", &x = ";
	cout << &x << endl;

	{
		int texas = 113;
		cout << "In block, texas = " << texas;
		cout<< ", &texas = " << &texas << endl;

		cout << "In block, x = " << x;
		cout << ", &x = " << &x << endl;

	}

	cout << "Post-block, texas = " << texas;
	cout << ", &texas = " << &texas << endl;


}
