// 程序清单16.18.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <algorithm>

void Show(int);
const int LIM = 20;

using namespace std;

int main()
{
	int ar[LIM] = { 4, 5, 4, 2, 2, 3, 4, 8, 1, 4 };
	list<int> la(ar, ar + LIM);
	list<int> lb(la);

	cout << "Original list contents:\n\t";
	for_each(la.begin(), la.end(), Show);
	cout << endl;

	la.remove(4);
	cout << "After using the remove() method:\n";
	cout << "la:\t";
	for_each(la.begin(), la.end(), Show);
	cout << endl;

	list<int>::iterator last;
	last = remove(lb.begin(), lb.end(), 4);
	cout << "After using the remove() function:\n";
	cout << "lb:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;

	lb.erase(last, lb.end());
	cout << "After using the erase() method:\n";
	cout << "lb:\t";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;


	system("pause");
    return 0;
}

void Show(int n)
{
	cout << n << " ";
}
