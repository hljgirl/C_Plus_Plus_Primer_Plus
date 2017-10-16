// 程序清单13.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include "tabtenn1.h"

int main()
{
	{
		TableTennisPlayer player1("Tara", "Boomdea", false);
		RatedPlayer rplayer1(1140, "Mallory", "Duck", true);

		rplayer1.Name();
		if (rplayer1.HasTable())
		{
			cout << ": has a table.\n";
		}
		else
		{
			cout << ": hasn't a table.\n";
		}

		player1.Name();
		if (player1.HasTable())
		{
			cout << ": has a table.\n";
		}
		else
		{
			cout << ": hasn't a table.\n";
		}

		cout << "Name: ";
		rplayer1.Name();
		cout << "; Rating: " << rplayer1.Rating() << endl;


		RatedPlayer rplayer2(1212, player1);
		cout << "Name: ";
		rplayer2.Name();
		cout << "; Rating: " << rplayer2.Rating() << endl;


// 		TableTennisPlayer * pt = &rplayer1;
// 		pt->Name();
// 
// 		TableTennisPlayer & rt = rplayer1;
// 		rt.Name();


	}
	system("pause");
    return 0;
}

