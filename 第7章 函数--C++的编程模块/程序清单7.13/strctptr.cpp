// 程序清单7.13.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

void rect_to_polar(const rect *, polar *);
void show_polar(const polar *);

int main()
{
	system("color 0A");

	rect rplace;
	polar pplace;

	cout << "Enter the x and y value: ";

	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two numbers(q to quit): ";
	}

	cout << "Done.\n";

	system("pause");
	return 0;
}

void rect_to_polar(const rect * r, polar * p)
{
	p->distance = sqrt(r->x * r->x + r->y * r->y);
	p->angle = atan2(r->y, r->x);
}


void show_polar(const polar * p)
{
	const double Rad_to_deg = 180 / 3.14159;
	cout << "distance = " << p->distance;
	cout << ", angle = " << p->angle * Rad_to_deg;
	cout << " degrees.\n";
}
