// 程序清单5.9.cpp : 定义控制台应用程序的入口点。
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

	int i,j;
	char temp;

	for (j = 0, i = word.size() - 1; j<i; j++, i--)
	{

		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}

	cout << word << "\nBye.\n";

	system("pause");
	return 0;
}

