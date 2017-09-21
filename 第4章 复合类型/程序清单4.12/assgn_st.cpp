// 程序清单4.12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;


struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable bouquet = {"sunflowers", 0.20, 12.49};

	inflatable choice;

	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;

	choice = bouquet;

	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;


	system("pause");
	return 0;
}

