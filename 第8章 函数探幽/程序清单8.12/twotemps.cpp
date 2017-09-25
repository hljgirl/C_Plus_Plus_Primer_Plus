// 程序清单8.12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

template <typename T>
void Swap(T& a, T& b);

template <typename T>
void Swap(T a[], T b[], int n);

void Show(int a[]);
const int LIM = 8;


int main()
{
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << ".\n";


	int d1[] = {0, 7, 0, 7, 1, 7, 7, 6};
	int d2[] = {0, 7, 2, 0, 1, 9, 6, 9};
	cout << "Original arrays: \n";
	Show(d1);
	Show(d2);
 	Swap(d1, d2, LIM);
	cout << "Swapped arrays: \n";
	Show(d1);
	Show(d2);


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



template<typename T>
void Swap(T a[], T b[], int n)
{
	T temp;

	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}

}

void Show(int a[])
{
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";

	for (int i = 4; i < LIM; i++)
	{
		cout << a[i];
	}

	cout << endl;
}
