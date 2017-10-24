// 程序清单17.14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{

	char ch;

	while (cin.get(ch))
	{
		if (ch != '#')
		{
			cout << ch;
		}
		else
		{
			cin.putback(ch);
			break;
		}
	}

	if (!cin.eof())
	{
		cin.get(ch);
		cout << endl << ch << " is next input character.\n";
	}
	else
	{
		cout << "End of file reached.\n";
		exit(0);
	}

	while (cin.peek() != '#')
	{
		cin.get(ch);
		cout << ch;
	}

	if (!cin.eof())
	{
		cin.get(ch);
		cout << endl << ch << " is next input character.\n";
	}
	else
	{
		cout << "End of file reached.\n";
	}


	system("pause");
    return 0;
}

