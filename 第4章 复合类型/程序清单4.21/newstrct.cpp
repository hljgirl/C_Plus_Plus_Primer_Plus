// 程序清单4.21.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable *ps = new inflatable;

	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);

	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;

	cout << "Enter price: $";
	cin >> ps->price;


	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << " cubic feet\n";
	cout << "Price: $" << ps->price << endl;


	system("pause");
	return 0;
}

