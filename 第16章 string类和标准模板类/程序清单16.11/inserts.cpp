// 程序清单16.11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

void output(const string& s) { cout << s << " "; };

int main()
{
	string s1[4] = { "fine", "fish", "fashion", "fate" };
	string s2[2] = { "busy", "bats" };
	string s3[2] = { "silly", "singers" };

	vector<string> words(4);

	copy(s1, s1 + 4, words.begin());
	for_each(words.begin(), words.end(), output);
	cout << endl;

	back_insert_iterator<vector<string>> back_it(words);
	copy(s2, s2 + 2, back_it);
	for_each(words.begin(), words.end(), output);
	cout << endl;

	insert_iterator<vector<string>> insert_it(words, words.begin());
	copy(s3, s3 + 2, insert_it);
	for_each(words.begin(), words.end(), output);
	cout << endl;


	system("pause");
	return 0;
}

