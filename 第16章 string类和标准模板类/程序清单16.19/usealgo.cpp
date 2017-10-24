// 程序清单16.19.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>

using namespace std;

char toLower(char ch);
string& ToLower(string& st);
void display(const string& s);

int main()
{
	vector<string> words;
	cout << "Enter words (enter \"quit\" to quit):\n";
	string input;
	while (cin >> input && input != "quit")
		words.push_back(input);

	cout << "You entered the following words:\n";
	for_each(words.begin(), words.end(), display);
	cout << endl;


	set<string> wordset;
	transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()), ToLower);
	cout << "\nAlphabetic list of words:\n";
	for_each(wordset.begin(), wordset.end(), display);
	cout << endl;


	map<string, int> wordmap;
	set<string>::iterator it;

	for (it = wordset.begin(); it != wordset.end(); it++)
	{
		wordmap[*it] = count(words.begin(), words.end(), *it);
	}

	cout << "\nWord frequency\n";
	for (it = wordset.begin(); it != wordset.end(); it++)
	{
		cout << *it << ": " << wordmap[*it] << endl;
	}

	/*for each (auto si in wordmap)
	{
		cout << si.first << ": " << si.second << endl;
	}*/


	system("pause");
    return 0;
}

char toLower(char ch)
{
	return tolower(ch);
}

string & ToLower(string & st)
{
	transform(st.begin(), st.end(), st.begin(), toLower);
	return st;
}

void display(const string & s)
{
	cout << s << " ";
}
