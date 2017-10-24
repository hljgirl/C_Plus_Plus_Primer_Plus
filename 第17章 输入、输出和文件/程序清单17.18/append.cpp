// 程序清单17.18.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char* file = "guests.txt";

int main()
{
	char ch;
	
	ifstream fin;
	fin.open(file);

	if (fin.is_open())
	{
		cout << "Here are the current contents of the "
			<< file << " file:\n";
		while (fin.get(ch))
		{
			cout << ch;
		}

		fin.close();
	}

	ofstream fout(file, ios::out | ios::app);

	if (!fout.is_open())
	{
		cerr << "Can't open " << file << " file for output.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Enter guest names(enter a blank line to quit):\n";
	string name;
	while (getline(cin, name) && name.size() > 0)
	{
		fout << name << endl;
	}

	fout.close();


	fin.clear();

	fin.open(file);

	if (fin.is_open())
	{
		cout << "Here are the new contents of the "
			<< file << " file:\n";
		while (fin.get(ch))
		{
			cout << ch;
		}

		fin.close();
	}


	cout << "Done.\n";
	system("pause");
    return 0;
}

