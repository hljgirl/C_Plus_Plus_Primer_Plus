// 程序清单15.10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "exc_mean.h"

double hmean(double, double);
double gmean(double, double);

int main()
{
	double x, y;
	double z = 0;

	cout << "Enter two numbers: ";

	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);

			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;

			cout << "Geometric mean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;

			cout << "Enter next set of numbers <q to quit>: \n";
		}
		catch (bad_hmean* e)
		{
			e->mesg();
			cout << "Try again.\n";
			continue;
		}
		catch (bad_gmean& s)
		{
			cout << s.mesg();
			cout << "Values used: " << s.v1 << ", "
				<< s.v2 << endl;
			cout << "Sorry, you don't get to play any more.\n";
			break;
		}
	}

	cout << "Bye!\n";

	system("pause");
    return 0;
}


double hmean(double a, double b)
{
	if (a == -b)
	{
		throw &bad_hmean(a, b);
	}

	return 2.0*a*b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
	{
		throw bad_gmean(a, b);
	}

	return sqrt(a*b);
}
