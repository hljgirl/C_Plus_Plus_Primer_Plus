// 程序清单18.10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void show_list() {}

template <typename T>
void show_list(const T& value)
{
	cout << value << endl;
}

template <typename T, typename... Args>
void show_list(const T& value, const Args&... args)
{
	cout << value << ", ";
	show_list(args...);
}

int main()
{
	int n = 14;
	double x = 2.71828;
	string mr = "Mr. String objects!";

	show_list(n, x);
	show_list(x*x, '!', 7, mr);


	system("pause");
    return 0;
}

