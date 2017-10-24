// 程序清单16.21.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <valarray>
#include <cstdlib>

using namespace std;

const int NUM = 12;
typedef valarray<int> vint;
void show(const vint& v, int cols);

int main()
{
	vint valint(NUM);

	int i;
	for ( i = 0; i < NUM; i++)
	{
		valint[i] = rand() % 10;
	}

	cout << "Original array:\n";
	show(valint, 3);


	vint vcol(valint[slice(1, 4, 3)]);
	cout << "Second column:\n";
	show(vcol, 1);

	vint vrow(valint[slice(3, 3, 1)]);
	cout << "Second row:\n";
	show(vrow, 1);


	valint[slice(2, 4, 3)] = 10;
	cout << "Set last column to 10:\n";
	show(valint, 3);

	cout << "Set first column to sum of next two:\n";
	valint[slice(0, 4, 3)] = vint(valint[slice(1, 4, 3)])+ vint(valint[slice(2, 4, 3)]);
	show(valint, 3);


	system("pause");
    return 0;
}

void show(const vint & v, int cols)
{
	int lim = v.size();
	for (int i = 0; i < lim; i++)
	{
		cout.width(3);
		cout << v[i];
		if (i % cols == cols - 1)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}

	if (lim % cols != 0)
	{
		cout << endl;
	}
}
