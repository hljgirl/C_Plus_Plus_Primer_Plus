// 程序清单16.14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{

	multimap<int, string> codes;
	codes.insert(pair<int ,string>(415, "San Francisco"));
	codes.insert(pair<int, string>(510, "Oakland"));
	codes.insert(pair<int, string>(718, "Brooklyn"));
	codes.insert(pair<int, string>(718, "Staten Island"));
	codes.insert(pair<int, string>(415, "San Rafael"));
	codes.insert(pair<int, string>(510, "Berkeley"));

	cout << "Number of cities with area code 415: "
		<< codes.count(415) << endl;
	cout << "Number of cities with area code 718: "
		<< codes.count(718) << endl;
	cout << "Number of cities with area code 718: "
		<< codes.count(510) << endl;


	cout << "Area Code\tCity\n";
	multimap<int, string>::iterator it;
	for (it = codes.begin(); it!=codes.end();it++)
	{
		cout << "\t" << (*it).first << "\t" << (*it).second << endl;
	}

	//pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range
	auto range = codes.equal_range(718);

	cout << "Cities with area code 718:\n";
	for (it = range.first; it != range.second; it++)
	{
		cout << (*it).second << endl;
	}



	system("pause");
	return 0;
}

