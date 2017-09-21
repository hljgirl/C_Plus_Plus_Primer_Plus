// 程序清单3.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

	char ch;

	cout << "Enter a character: " << endl;
	cin >> ch;

	cout << "Hola! ";
	cout << "Thank you for the " << ch << " character." << endl;

	system("pause");
    return 0;
}

