// 程序清单4.8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	string s1 = "penguin";
	string s2, s3;


	cout << "You can assign one string object to another: s2 = s1 \n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;


	cout << "You can assign a C-style string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2: " << s2 << endl;


	cout << "You can concatenate strings: s3 = s1 + s2 \n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;


	cout << "You can append strings.\n";
	s1 += s2;
	cout << "s1 += s2 yields s1 = " << s1 << endl;

	s2 += " for a day";

	cout << "s2 += \"for a day\" yields s2 = " << s2 << endl;



	cout << "s1: " << s1 << ", s2: " << s2 << ", s3: "<< s3 <<endl;


	system("pause");
	return 0;
}

