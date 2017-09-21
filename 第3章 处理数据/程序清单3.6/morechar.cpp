// 程序清单3.6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	char ch = 'M';
	int i = ch;

	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;

	ch += 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;


	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);

	cout.put('!');

	cout << endl << "Done" << endl;

	system("pause");
	return 0;
}

