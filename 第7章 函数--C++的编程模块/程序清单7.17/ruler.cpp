// 程序清单7.17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

const int Len = 66;
const int Divs = 6;

void subdivide(char* ch, int low, int high, int level);

int main()
{
	system("color 0A");

	char ruler[Len];

	int i;

	for ( i = 1; i < Len - 2; i++)
	{
		ruler[i] = ' ';
	}

	ruler[Len - 1] = '\0';

	int _max = Len - 2;
	int _min = 0;

	ruler[_min] = ruler[_max] = '|';


	cout << ruler << endl;


	for (i = 1; i <= Divs; i++)
	{
		subdivide(ruler, _min, _max, i);
		cout << ruler << endl;

		for (int j = 1; j < Len - 2; j++)
		{
			ruler[j] = ' ';
		}
	}

	system("pause");
	return 0;
}



void subdivide(char* ch, int low, int high, int level)
{
	if (level == 0)
		return;

	int mid = (high + low) / 2;
	ch[mid] = '|';
	subdivide(ch, low, mid, level - 1);
	subdivide(ch, mid, high, level - 1);
}