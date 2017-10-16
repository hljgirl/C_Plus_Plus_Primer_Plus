// 程序清单15.14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include "Sales.h"

using namespace std;

int main()
{
	double vals1[12] = {1220, 1100, 1122, 2212, 1232, 2334, 2884, 2393, 3302, 2922, 3002, 3544};
	double vals2[12] = {12, 11, 22, 21, 32, 34, 28, 29, 33, 29, 32, 35};

	Sales sales1{ 2011, vals1, 12 };
	LabeledSales sales2("Blogstar", 2012, vals2, 12);

	cout << "First try block:\n";

	try
	{
		int i;
		cout << "Year = " << sales1.Year() << endl;

		for (i = 0; i < 12; i++)
		{
			cout << sales1[i] << ' ';
			if (i % 6 == 5)
			{
				cout << endl;
			}
		}

		cout << "Year = " << sales2.Year() << endl;
		cout << "Lable = " << sales2.Label() << endl;

		for ( i = 0; i <= 12; i++)
		{
			cout << sales2[i] << ' ';
			if (i % 6 == 5)
			{
				cout << endl;
			}
		}

		cout << "End of try bolck 1.\n";
	}
	catch (LabeledSales::nbad_index& bad)
	{
		cout << bad.what();
		cout << "Company: " << bad.lable_val() << endl;
		cout << "bad_index: " << bad.bi_val() << endl;
	}
	catch (Sales::bad_index& bad)
	{
		cout << bad.what();
		cout << "bad_index: " << bad.bi_val() << endl;
	}

	cout << "\nNext try block:\n";

	try
	{
		sales2[2] = 37.5;
		sales1[20] = 23345;
		cout << "End of try block 2.\n";
	}
	catch (LabeledSales::nbad_index& bad)
	{
		cout << bad.what();
		cout << "Company: " << bad.lable_val() << endl;
		cout << "bad_index: " << bad.bi_val() << endl;
	}
	catch (Sales::bad_index& bad)
	{
		cout << bad.what();
		cout << "bad_index: " << bad.bi_val() << endl;
	}


	cout << "\nDone!\n";
	system("pause");
    return 0;
}

