#include <stdio.h>
#include <windows.h>
#include <iostream>
#include "coordin.h"

using namespace std;

int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values:\n";
	while (cin>>rplace.x>>rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}

	cout << "Bye!\n";

	system("pause");
	return 0;
}