// 程序清单8.13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

struct job
{
	char name[40];
	double salary;
	int floor;
};


template <typename T>
void Swap(T& a, T& b);

template<> void Swap<job>(job& a, job& b);

void Show(const job& j);

int main()
{

	cout.precision(2);
	cout.setf(ios::fixed, ios_base::floatfield);

	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << ".\n";

	cout << endl;

	job sue = {"Susan Yaffee", 73000.60, 7};
	job sidney = {"Sidney Taffee", 78060.72, 9};

	cout << "Before job swapping: \n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "After job swapping:\n";
	Show(sue);
	Show(sidney);


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

template<>
void Swap(job & a, job & b)
{
	double d_temp;
	double i_temp;

	d_temp = a.salary;
	a.salary = b.salary;
	b.salary = d_temp;

	i_temp = a.floor;
	a.floor = b.floor;
	b.floor = i_temp;

}

void Show(const job & j)
{
	cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}
