// 程序清单17.10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	cout << fixed << right;

	cout << setw(6) << "N" << setw(14) << "square root"
		<< setw(15) << "fourth root\n";

	double root;

	for (int i = 10; i <= 100; i += 10)
	{
		root = sqrt(double(i));

		cout << setw(6) << setfill('.') << i << setfill(' ')
			<< setw(12) << setprecision(3) << root
			<< setw(14) << setprecision(4) << sqrt(root) << endl;

	}

	system("pause");
    return 0;
}

