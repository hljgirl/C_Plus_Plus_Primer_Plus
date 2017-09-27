// 程序清单10.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include "stock10.h"

int main()
{
	{
		using std::cout;

		cout << "Using constructors to create new object \n";

		//Stock stock1;
		//Stock stock1 = {"NanoSmart", 12, 20.0};
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();

		Stock stock2 = Stock("Boffo Object", 2, 2.0);
		stock2.show();


		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2:\n";
		stock1.show();
		stock2.show();

		cout << "Using a constructor to reset an object\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);
		cout << "Revised stock1:\n";
		stock1.show();

	}
	system("pause");
    return 0;
}

