// 程序清单8.11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

template <typename T>
void Swap(T& left, T& right);


int main()
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << ".\n";

	cout << endl;

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "Using compiler-generated double swapper:\n";
	Swap(x, y);
	cout << "Now x, y = " << x << ", " << y << ".\n";



	system("pause");
	return 0;
}



template<typename T>
void Swap(T & left, T & right)
{
	T temp;
	temp = left;
	left = right;
	right = temp;
}


