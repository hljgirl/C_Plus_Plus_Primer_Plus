// 程序清单17.17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		cerr << "Usage: " << argv[0] << " filename[s]\n";
		exit(0);
	}

	ifstream fin;
	long count;
	long total = 0;
	char ch;

	for (int file = 1; file < argc; file++)
	{
		fin.open(argv[file]);

		if (!fin.is_open())
		{
			cerr << "Could not open " << argv[file] << endl;
			fin.clear();
			continue;
		}

		count = 0;

		while (fin.get(ch))
		{
			count++;
		}

		cout << count << " characters in " << argv[file] << endl;

		total += count;
		fin.clear();
		fin.close();
	}

	cout << total << " characters in all files\n";

	system("pause");
	return 0;
}

