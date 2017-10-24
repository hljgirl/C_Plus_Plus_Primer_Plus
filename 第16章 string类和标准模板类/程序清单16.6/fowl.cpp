// 程序清单16.6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main()
{
	shared_ptr<string> films[5] = 
	{
		unique_ptr<string>(new string("Fowl Balls")),
		unique_ptr<string>(new string("Duck Walks")),
		unique_ptr<string>(new string("Chicken Runs")),
		unique_ptr<string>(new string("Turkey Errors")),
		unique_ptr<string>(new string("Goose Eggs"))
	};

	shared_ptr<string> pwin;
	pwin = films[2];

	cout << "The nominees for best avian baseball film are\n";
	for (int i = 0; i < 5; i++)
	{
		cout << *films[i] << endl;
	}

	cout << "The winner is " << *pwin << "!\n";

	system("pause");
    return 0;
}

