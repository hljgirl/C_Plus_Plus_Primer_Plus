// 程序清单17.13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int Limit = 255;

int main()
{
	char input[Limit];

	cout << "Enter a string for getline() processing:\n";
	cin.getline(input, Limit, '#');
	cout << "Here is your input:\n";
	cout << input << "\nDone with phase 1\n";

	char ch;
	cin.get(ch);
	cout << "The next input character is " << ch << endl;

	if (ch != '\n')
	{
		cin.ignore(Limit, '\n');
	}

	cout << "Enter a string for get() processing:\n";
	cin.get(input, Limit, '#');
	cout << "Here is your input:\n";
	cout << input << "\nDone with phase 2\n";

	cin.get(ch);
	cout << "The next input character is " << ch << endl;


	system("pause");
    return 0;
}

