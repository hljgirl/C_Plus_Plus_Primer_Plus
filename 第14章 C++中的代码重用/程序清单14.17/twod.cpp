// 程序清单14.17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "arraytp.h"


int main()
{
	ArrayTP<int, 10> sums;
	ArrayTP<double, 10> aves;
	ArrayTP<ArrayTP<int, 5>, 10> twodee;

	int i, j;

	for ( i = 0; i < 10; i++)
	{
		sums[i] = 0;

		for ( j = 0; j < 5; j++)
		{
			twodee[i][j] = (i + 1) * (j + 1);
			sums[i] += twodee[i][j];
		}

		aves[i] = (double)sums[i] / 10;
	}

	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			cout.width(2);
			cout << twodee[i][j]<<' ';
		}
		cout << ": sum = ";
		cout.width(3);
		cout << sums[i] << ", average = " << aves[i] << endl;
	}

	cout << "Done.\n";
	system("pause");
	return 0;
}

