// 程序清单15.4.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include "tvfm.h"

using namespace std;

int main()
{
	{

		Tv s42;
		cout << "Initial setting for 42\" TV:\n";
		s42.tv_setting();

		s42.tv_onoff();
		s42.tv_chanup();
		cout << "\nAdjusted setting for 42\" TV:\n";
		s42.tv_chanup();
		cout << "\nAdjusted setting for 42\" TV:\n";
		s42.tv_setting();

		Remote grey;

		grey.romote_set_chan(s42, 10);
		grey.romote_volup(s42);
		grey.romote_volup(s42);
		cout << "\n42\" setting after using remote:\n";
		s42.tv_setting();


		Tv s58(Tv::on);
		s58.tv_set_mode();
		grey.romote_set_chan(s58, 28);
		cout << "\n58\" setting:\n";
		s58.tv_setting();

	}

	system("pause");
	return 0;
}