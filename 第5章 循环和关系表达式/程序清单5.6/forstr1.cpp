// 程序清单5.6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	cout << "Enter a word: ";

	string word;
	cin >> word;

	for (int i = word.size() - 1; i >= 0; i--)
	{
		cout << word[i];
	}

	cout << "\nBye.\n";

	system("pause");
	return 0;
}

