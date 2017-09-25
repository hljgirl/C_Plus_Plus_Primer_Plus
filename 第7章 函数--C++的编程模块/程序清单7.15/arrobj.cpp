// 程序清单7.15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill_arr(array<double, Seasons> *);
void show_arr(array<double, Seasons>);

int main()
{
	system("color 0A");

	array<double, Seasons> expenses;
	fill_arr(&expenses);
	show_arr(expenses);

	
	system("pause");
	return 0;
}



void fill_arr(array<double, Seasons> * arr)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*arr)[i];
	}
}


void show_arr(array<double, Seasons> arr)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";

	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}

	cout << "Total Expenses: $" << total << endl;
}