// 程序清单16.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string empty;
	string small = "bit";
	string larger = "Elephants are a girl's best friend";

	cout << "Sizes: \n";
	cout << "\tempty: " << empty.size() << endl;
	cout << "\tsmall: " << small.size() << endl;
	cout << "\tlarger: " << larger.size() << endl;

	cout << "Capacities:\n";
	cout << "\tempty: " << empty.capacity() << endl;
	cout << "\tsmall: " << small.capacity() << endl;
	cout << "\tlarger: " << larger.capacity() << endl;

	empty.reserve(50);
	cout << "Capacity after empty.reserve(50): "
		<< empty.capacity() << endl;

	system("pause");
    return 0;
}

