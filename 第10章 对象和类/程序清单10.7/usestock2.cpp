// 程序清单10.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include "stock20.h"

const int STKS = 4;

int main()
{
	{
		
		Stock stocks[STKS] =
		{
			{"NanoSmart", 12, 20.0},
			{"Boffo Objects", 200, 2.0 },
			{"Monolithic Obelisks", 130, 3.25 },
			{"Fleep Enterprises", 60, 6.5 }
		};


		std::cout << "Stock holdings:\n";

		for (int i = 0; i < STKS; i++)
		{
			stocks[i].show();
		}

		const Stock* top = stocks;

		for (int i = 1; i < STKS; i++)
		{
			top = &(top->topval(stocks[i]));
		}

		std::cout << "\nMost valuable holding: \n";
		top->show();

	}

	system("pause");
    return 0;
}

