// 程序清单16.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int NUM = 5;

int main()
{
	vector<int> ratings(NUM);
	vector<string> titles(NUM);

	cout << "Your will do exactly as told. You will enter\n"
		<< NUM << " book titles and your ratings(0-10).\n";

	for (int i = 0; i < NUM; i++)
	{
		cout << "Enter title #" << i + 1 << ": ";
		getline(cin, titles[i]);
		cout << "Enter your rating(0-10): ";
		cin >> ratings[i];
		cin.get();
	}

	cout << "Thank you. You entered the following: \n"
		<< "Rating\tBook\n";
	for (int i = 0; i < NUM; i++)
	{
		cout << ratings[i] << "\t" << titles[i] << endl;
	}

	system("pause");
    return 0;
}

