// 程序清单9.13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "namesp.h"

void other(void);
void another(void);

int main()
{
	using debts::Debt;
	using debts::showDebt;

	Debt golf = { {"Benny", "Goatsniff"}, 120.0 }; 
	showDebt(golf);

	other();
	another();

	system("pause");
    return 0;
}


void other(void)
{
	using std::cout;
	using std::endl;

	using namespace debts;

	Person dg = {"Doobles", "Glister"};
	showPerson(dg);
	
	cout << endl;

	Debt zippy[3];
	
	for (int i = 0; i < 3; i++)
	{
		getDebt(zippy[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		showDebt(zippy[i]);
	}

	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;

}


void another(void)
{
	using pers::Person;
	Person collector = {"Milo", "Rightshift"};
	pers::showPerson(collector);
	std::cout << std::endl;
}
