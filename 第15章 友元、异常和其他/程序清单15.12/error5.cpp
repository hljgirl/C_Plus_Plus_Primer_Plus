// 程序清单15.12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <string>

#include "exc_mean.h"

using namespace std;

class demo
{
public:
	demo(const string & str);
	~demo();

	void show() const;
private:
	string word;
};

demo::demo(const string & str)
{
	word = str;
	cout << "demo " << word << " created\n";
}

demo::~demo()
{
	cout << "demo " << word << " destroyed\n";
}

void demo::show() const
{
	cout << "demo " << word << " lives!\n";
}


double hmean(double, double);
double gmean(double, double);
double means(double, double);

int main()
{
	double x, y;
	double z = 0;

	{
		demo d1("found in block in main()");

		cout << "Enter two numbers: ";

		while (cin >> x >> y)
		{
			try
			{
				z = means(x, y);
				cout << "The mean mean of " << x << " and " << y
					<< " is " << z << endl;
			}
			catch (bad_hmean& bg)
			{
				bg.mesg();
				cout << "Try again.\n";
				continue;
			}
			catch (bad_gmean& hg)
			{
				cout << hg.mesg();
				cout << "Values used: " << hg.v1 << ", "
					<< hg.v2 << endl;
				cout << "Sorry, you don't get to play any more.\n";
				break;
			}
		}

		d1.show();
	}

	cout << "Bye!\n";

	system("pause");
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);

	return 2.0*a*b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);

	return sqrt(a*b);
}

double means(double a, double b)
{
	double am, hm, gm;
	demo d2("found in means()");

	am = (a + b) / 2.0;
	try
	{
		hm = hmean(a, b);
		gm = gmean(a, b);
	}
	catch (bad_hmean& bg)
	{
		bg.mesg();
		cout << "Caught in means()\n";
		throw;
	}

	d2.show();

	return (am + hm + gm) / 3.0;
}