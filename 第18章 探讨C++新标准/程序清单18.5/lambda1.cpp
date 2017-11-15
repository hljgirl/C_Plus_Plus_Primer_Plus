// 程序清单18.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

using namespace std;

const long Size1 = 390000L;

int main()
{
	srand(time(0));

	vector<int> numbers(Size1);

	generate(numbers.begin(), numbers.end(), rand);
	cout << "Sample size = " << Size1 << endl;

	int count3 = count_if(numbers.begin(), numbers.end(), [](int x) {return x % 3 == 0; });
	cout << "Count of numbers divisible by 3: " << count3 << endl;

	int count13 = 0;
	for_each(numbers.begin(), numbers.end(), [&count13](int x) {count13 += x % 13 == 0; });
	cout << "Count of numbers divisible by 13: " << count13 << endl;


	count3 = count13 = 0;

	for_each(numbers.begin(), numbers.end(), [&](int x) {count3 += x % 3 == 0; count13 += x % 13 == 0; });
	cout << "Count of numbers divisible by 3: " << count3 << endl;
	cout << "Count of numbers divisible by 13: " << count13 << endl;

	system("pause");
    return 0;
}

