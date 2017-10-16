// 程序清单15.19.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void change(const int* pt, int n);

int main()
{
	int popl = 38383;
	const int pop2 = 2000;

	cout << "pop1, pop2: " << popl << ", " << pop2 << endl;

	change(&popl, -103);
	change(&pop2, -103);

	cout << "pop1, pop2: " << popl << ", " << pop2 << endl;


	system("pause");
    return 0;
}


void change(const int* pt, int n)
{
	int *pc;

	pc = const_cast<int *>(pt);

	*pc += n;
}