// 程序清单6.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	char ch;

	cout << "Type, and I shall repeat. '.' for quit.\n";
	cin.get(ch);

	
	while (ch != '.')
	{
		if (ch == '\n')
		{
			cout << ch;
		}
		else {
			cout << ++ch;
		}

		cin.get(ch);
	}

	cout << "\nPlease excuse the slight confusion.\n";


	system("pause");
	return 0;
}

