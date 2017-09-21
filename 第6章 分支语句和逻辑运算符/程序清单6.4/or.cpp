// 程序清单6.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"Do you wish to continue?<y/n>";

	char ch;

	cin >> ch;

	if (ch == 'y' || ch == 'Y')
	{
		cout << "You were warned!\a\a\n";
	}else if (ch == 'n' || ch == 'N')
	{
		cout << "A wise choice....Bye!\n";
	}
	else
	{
		cout << "That wasn't a y or n! Apparently you "
			"can't follow\ninstruction, so "
			"I'll trash your disk anyway.\a\a\a\n";
	}


	system("pause");
	return 0;
}

