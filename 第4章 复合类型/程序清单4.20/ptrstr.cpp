// 程序清单4.20.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;

int main()
{
	char animal[20] = "bear";
	const char * bird = "wren";

	char * ps;


	cout << animal << " and ";
	cout << bird << "\n";


	cout << "Enter a kind of animal: ";
	cin >> animal;
	ps = animal;
	cout << ps << "!\n";

	cout << "Before using strcpy(): \n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;


	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "After using strcpy(): \n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;

	delete ps;

	system("pause");
	return 0;
}

