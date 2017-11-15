// 程序清单18.11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

using namespace std;

int main()
{
	cout << "Enter your weight: ";
	float weight;
	cin >> weight;

	string gain = "A 10% increase raises ";
	string wt = boost::lexical_cast<string>(weight);

	gain = gain + wt + " to ";
	weight = 1.1*weight;

	gain = gain + boost::lexical_cast<string>(weight) + ".";
	

	cout << gain << endl;


	system("pause");
    return 0;
}

