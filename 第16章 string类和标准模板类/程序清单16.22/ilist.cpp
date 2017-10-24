// 程序清单16.22.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <initializer_list>

using namespace std;

double sum(initializer_list<double> il);
double average(const initializer_list<double>& ril);

int main()
{
	cout << "List 1: sum = " << sum({ 2,3,4 })
		<< ", ave = " << average({ 2,3,4 }) << endl;

	initializer_list<double> dl = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	cout << "List 2: sum = " << sum(dl)
		<< ", ave = " << average(dl) << endl;

	dl = { 16.0, 25.0, 36.0, 40.0, 64.0 };
	cout << "List 3: sum = " << sum(dl)
		<< ", ave = " << average(dl) << endl;


	system("pause");
    return 0;
}

double sum(initializer_list<double> il)
{
	double tot = 0.0;

	for each (auto p in il)
	{
		tot += p;
	}

	return tot;
}

double average(const initializer_list<double>& ril)
{
	double tot = 0;
	int n = ril.size();
	double ave = 0.0;

	if (n > 0)
	{
		for each (auto p in ril)
		{
			tot += p;
		}
		ave = tot / n;
	}

	return ave;
}
