// 程序清单12.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <ctime>
#include "string2.h"

using namespace std;

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
	{
		String name;
		cout << "Hi, what's your name?\n";
		cin >> name;

		cout << name << ", please enter up to " << ArSize
			<< " short sayings <empty lien to quit>:\n";

		String sayings[ArSize];
		char temp[MaxLen];
		int i;

		for (i = 0; i < ArSize; i++)
		{
			cout << i + 1 << ": ";
			cin.get(temp, MaxLen);
			while (cin && cin.get() != '\n')
				continue;

			if (!cin || temp[0] == '\0')
			{
				break;
			}
			else
			{
				sayings[i] = temp;
			}
		}

		int total = i;

		if (total > 0)
		{
			cout << "Here are your sayings:\n";
			for (i = 0; i < total; i++)
			{
				cout << sayings[i][0] << ": " << sayings[i] << endl;
			}


			String * shortest = &sayings[0];
			String * first = &sayings[0];


			for (i = 1; i < total; i++)
			{
				if (sayings[i].length() < shortest->length())
				{
					shortest = &sayings[i];
				}

				if (sayings[i] < *first)
				{
					first = &sayings[i];
				}
			}

			cout << "shortest saying:\n" << *shortest << endl;
			cout << "First alphabetically:\n" << *first << endl;


			srand(time(0));
			int choice = rand() % total;
			String * favorite = new String(sayings[choice]);
			cout << "My favorite saying:\n" << *favorite << endl;;
			delete favorite;

			cout << "This program used " << String::HowMany()
				<< " String object. Bye.\n";
		}
		else
		{
			cout << "No Much to say, em?\n";
		}
	}

	cout << "Bye.\n";

	system("pause");
	return 0;
}