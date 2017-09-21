// 程序清单2.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int carrots;

	carrots = 25;

	cout << "I have ";
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	
	carrots = carrots - 1;
	cout << "Crunch , crunch. Now I have " << carrots << " carrots." << endl;

	cin.get();
    return 0;
}

