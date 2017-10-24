// 程序清单17.16.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string filename;

	cout << "Enter name for new file: ";
	cin >> filename;

	ofstream fout(filename.c_str());

	fout << "For your eyes only!\n";
	cout << "Enter your secret number: ";
	float secret;
	cin >> secret;

	fout << "Your secret number is " << secret << endl;
	fout.close();

	ifstream fin(filename.c_str());
	cout << "Here are the contents of " << filename << ":\n";
	char ch;

	while (fin.get(ch))
	{
		cout << ch;
	}

	cout << "Done\n";
	fin.close();


	system("pause");
    return 0;
}

