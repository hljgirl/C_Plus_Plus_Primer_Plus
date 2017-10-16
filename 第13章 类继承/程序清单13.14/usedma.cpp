// 程序清单13.14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include "dma.h"


int main()
{
	{

		baseDMA shirt("Portabelly", 8);
		lacksDMA balloon("red", "Blimpo", 4);
		hasDMA map("Mercator", "Buffalo", 5);


		cout << "Displaying baseDMA object:\n";
		cout << shirt << endl;

		cout << endl;

		cout << "Displaying lacksDMA object:\n";
		cout << balloon << endl;

		cout << endl;
		
		cout << "Displaying hasDMA object:\n";
		cout << map << endl;

		cout << endl;

		lacksDMA balloon2(balloon);
		cout << "Result of lacksDMA copy:\n";
		cout << balloon2 << endl;;

		cout << endl;

		hasDMA map2;
		map2 = map;
		cout << "Result of hasDMA assignment:\n";
		cout << map2 << endl;

	}


	system("pause");
    return 0;
}

