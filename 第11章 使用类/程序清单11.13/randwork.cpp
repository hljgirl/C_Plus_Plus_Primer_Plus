// 程序清单11.13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "vector.h"
#include <ctime>


int main()
{
	using namespace std;
	using VECTOR::Vector;

	srand(time(0));

	double direction;
	Vector step;
	Vector result;
	unsigned long steps = 0;
	double target;
	double dstep;

	cout << "Enter target distance(q to quit): ";

	while (cin>>target)
	{
		cout << "Enter step length: ";
		if (!(cin>>dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}

		cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		cout << result << endl;

		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}

	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	

	
	system("pause");
    return 0;
}

