// 程序清单13.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include "brass.h"

int main()
{

	{

		Brass Piggy("Porcelot Pigg", 381299, 4000.0);
		BrassPlus Hoggy("Horatio Hogg", 382288, 3000.0);

		Piggy.ViewAcct();
		cout << endl;

		Hoggy.ViewAcct();
		cout << endl;

		cout << "Depositing $1000 into the Hogg Account:\n";
		Hoggy.Deposit(1000.00);
		cout << "New balance: $" << Hoggy.Balance() << endl;

		cout << endl;

		cout << "Withdrawing $4200 form the Pigg Account:\n";
		Piggy.WithDraw(4200.00);
		cout << "Pigg account balance: $" << Piggy.Balance() << endl;

		cout << endl;

		cout << "Withdrawing $4200 form the Hogg Account:\n";
		Hoggy.WithDraw(4200.00);
		Hoggy.ViewAcct();
	}


	system("pause");
    return 0;
}

