// 程序清单8.6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);

int main()
{
	free_throws one = {"Ifelsa", 13, 14};
	free_throws two = { "Andor Knott", 10, 16 };
	free_throws three = { "Minnie Max", 7, 9 };
	free_throws four = { "Whily Looper", 5, 9 };
	free_throws five = { "Long Long", 6, 14 };
	free_throws team = { "Throwgoods", 0, 0 };

	free_throws  dup;

	set_pc(one);
	display(one);

	cout << endl;

	accumulate(team, one);
	display(team);

	cout << endl;

	display(accumulate(team, two));

	cout << endl;

	accumulate(accumulate(team, three), four);
	display(team);

	cout << endl;

	dup = accumulate(team, five);
	cout << "Displaying team:\n";
	display(team);

	cout << "\nDisplaying dup after assignment:\n";
	display(dup);

	cout << "-------------------------" << endl;

	set_pc(four);
	accumulate(dup, five) = four;

	cout << "Displaying dup after ill-advised assignment:\n";
	display(dup);

	system("pause");
	return 0;
}

void display(const free_throws & ft)
{
	cout << "Name: " << ft.name << endl;
	cout << "Made: " << ft.made << endl;
	cout << "Attempts: " << ft.attempts << endl;
	cout << "Percent: " << ft.percent << endl;
}


void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
	{
		ft.percent = 100.0f * ((float)ft.made / ft.attempts);
	} 
	else
	{
		ft.percent = 0;
	}
}


free_throws & accumulate(free_throws & target, const free_throws & source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	
	return target;
}