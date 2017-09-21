// 程序清单4.23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

struct antarctica_years_end
{
	int year;
};


int main()
{
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;


	antarctica_years_end *pa = &s02;
	pa->year = 1999;

	antarctica_years_end trio[3];
	trio[0].year = 2003;
	cout << trio->year << std::endl;


	const antarctica_years_end *arp[] = { &s01, &s02, &s03};
	cout << arp[1]->year << endl;


	const antarctica_years_end **ppa = arp;
	auto ppb = arp;
	

	cout << (*ppa)->year << endl;
	cout << (*(ppb + 1))->year << endl;


	system("pause");
	return 0;
}

