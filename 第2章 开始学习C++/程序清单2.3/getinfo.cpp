// 程序清单2.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

	int carrots;
	cout << "How many carrots do you have?" << endl;

	cin >> carrots;

	cout << "Here are two more. ";

	carrots = carrots + 2;

	cout << "Now you have " << carrots << " carrots." << endl;


	system("pause");
    return 0;
}

