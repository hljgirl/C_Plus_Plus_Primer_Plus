// 程序清单8.14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

template <typename T>
void ShowArray(T arr[], int n);


template <typename T>
void ShowArray(T* arr[], int n);

struct debts
{ 
	char name[50];
	double amount;
};


int main()
{
	int things[] = {13, 31, 103, 301, 310, 130};
	debts mr_E[3] = 
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Shout", 1800.0}	
	};

	double *pd[3];


	for (int i = 0; i < 3; i++)
	{
		pd[i] = &mr_E[i].amount;
	}


	cout << "Listing Mr.E's counts of things:\n";
	ShowArray(things, 6);


	cout << endl;

	cout << "Listing Mr.E's debts:\n";
	ShowArray(pd, 3);



	system("pause");
	return 0;
}

template<typename T>
void ShowArray(T arr[], int n)
{
	cout << "template A\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

template<typename T>
void ShowArray(T * arr[], int n)
{
	cout << "template B\n";
	for (int i = 0; i < n; i++)
	{
		cout << *arr[i] << ' ';
	}
	cout << endl;

}
