// 程序清单4.22.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

char * getname();

int main()
{

	char *name;

	name = getname();

	cout << name << " at " << (int *)name << endl;
	delete name;

	name = getname();
	cout << name << " at " << (int *)name << endl;
	delete name;


	system("pause");
	return 0;
}

char * getname() {

	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;

	char *pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;
}