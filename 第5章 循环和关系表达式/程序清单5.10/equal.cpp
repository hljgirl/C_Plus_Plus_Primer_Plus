// 程序清单5.10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	int quizscores[] = {20,20,20,20,20,19,20,18,20,20};

	cout << "Doing it right:\n";

	for (int i = 0; quizscores[i] == 20; i++)
	{
		cout << "quiz " << i << " is a 20\n";
	}

	cout << "Doing it dangerously wrong:\n";


	for (int i = 0; quizscores[i] = 20; i++)
	{
		cout << "quiz " << i << " is a 20\n";
	}


	system("pause");
	return 0;
}

