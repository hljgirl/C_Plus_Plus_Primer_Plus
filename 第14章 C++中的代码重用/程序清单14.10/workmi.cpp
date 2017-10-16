// 程序清单14.10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Workermi.h"

const int LIM = 5;

int main()
{

	{

		Worker * lolas[LIM];

		int ct;
		for (ct = 0; ct < LIM; ct++)
		{
			char choice;

			cout << "Enter the employee category:\n"
				<< "w: Waiter          s: singer\n"
				<< "t: singing waiter  q: quit\n";
			cin >> choice;

			while (strchr("wstq", choice) == NULL)
			{
				cout << "Please enter a w, s, t or q: ";
				cin >> choice;
			}

			if (choice == 'q')
				break;


			switch (choice)
			{
			case 'w':
				lolas[ct] = new Waiter;
				break;
			case 's':
				lolas[ct] = new Singer;
				break;
			case 't':
				lolas[ct] = new  SingingWaiter;
				break;
			default:
				break;
			}

			cin.get();
			lolas[ct]->Set();

		}

		if (ct)
		{
			cout << "\n Here is your staff:\n";
		}


		for (int i = 0; i < ct; i++)
		{
			cout << endl;
			lolas[i]->Show();
		}

		for (int i = 0; i < ct; i++)
		{
			delete lolas[i];
		}
	}

	cout << "Bye!\n";

	system("pause");
	return 0;
}
