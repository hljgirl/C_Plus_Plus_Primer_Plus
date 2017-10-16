// 程序清单15.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "tv.h"

using namespace std;

int main()
{
	{

		Tv s42;
		cout << "Initial setting for 42\" TV:\n";
		s42.setting();

		s42.onoff();
		s42.chanup();
		cout << "\nAdjusted setting for 42\" TV:\n";
		s42.chanup();
		cout << "\nAdjusted setting for 42\" TV:\n";
		s42.setting();

		Remote grey;

		grey.set_chan(s42, 10);
		grey.volup(s42);
		grey.volup(s42);
		cout << "\n42\" setting after using remote:\n";
		s42.setting();


		Tv s58(Tv::on);
		s58.set_mode();
		grey.set_chan(s58, 28);
		cout << "\n58\" setting:\n";
		s58.setting();

	}

	system("pause");
    return 0;
}

