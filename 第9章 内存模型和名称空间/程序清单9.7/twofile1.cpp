// 程序清单9.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int tom = 3;
int dick = 30;

static int harry = 300;

void remote_access();

int main()
{

	cout << "main() reports the following addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";

	remote_access();

	system("pause");
	return 0;
}

