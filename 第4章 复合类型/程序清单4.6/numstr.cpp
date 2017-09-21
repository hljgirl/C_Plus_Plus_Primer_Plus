// 程序清单4.6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	cout << "What year was your house built?\n";	
	int year;
	//cin >> year;
	(cin >> year).get();


	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);


	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;

	cout << "Done!\n";


	system("pause");
	return 0;
}

