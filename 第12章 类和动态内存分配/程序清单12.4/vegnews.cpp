// 程序清单12.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"

using namespace std;

void callme1(StringBad &);
void callme2(StringBad);

int main()
{
	{
		cout << "Starting an inner block.\n";

		StringBad headline1("headline1:Celery stalks at Midnight");
		StringBad headline2("headline2:Lettuce Prey");
		StringBad sports("sports:Spinach Leaves Bowl for Dollars");

		cout << "headline1: " << headline1 << endl;
		cout << "headline2: " << headline2 << endl;
		cout << "sports: " << sports << endl;

		cout << endl;


		callme1(headline1);
		cout << "headline1: " << headline1 << endl;

		cout << endl;

		callme2(headline2);
		cout << "headline2: " << headline2 << endl;

		cout << endl;


		cout << "Initialize one object to another: \n";
		StringBad sailor = sports;
		cout << "sailor: " << sailor << endl;

		cout << endl;


		cout << "Assign one object to another :\n";
		StringBad knot;
		knot = headline1;
		cout << "knot: " << knot << endl;

		cout << endl;
		cout << "Exiting the block.\n";

	}
	system("pause");
	return 0;
}



void callme1(StringBad & rsb)
{
	cout << "String passed by reference:\n";
	cout << "     \"" << rsb << "\"\n";
}


void callme2(StringBad sb)
{
	cout << "String passed by value:\n";
	cout << "     \"" << sb << "\"\n";
}