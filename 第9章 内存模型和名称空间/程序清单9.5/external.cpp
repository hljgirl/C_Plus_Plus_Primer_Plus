// 程序清单9.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double warming = 0.3;

void update(double dt);
void local();

int main()
{

	cout << "Global warming is " << warming << " degrees.\n";

	update(0.1);
	cout << "Global warming is " << warming << " degrees.\n";

	local();
	cout << "Global warming is " << warming << " degrees.\n";


	system("pause");
	return 0;
}

