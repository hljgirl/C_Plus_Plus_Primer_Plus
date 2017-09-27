// 程序清单12.9.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <new>

#include <mutex>

using namespace std;

const int BUF = 512;

class JustTesting
{
public:
	JustTesting(const string &s = "Just Testing", int n = 0);
	~JustTesting();
	void show() const;
private:
	string words;
	int number;
};

JustTesting::JustTesting(const string & s, int n)
{
	words = s;
	number = n;
	cout << words << " constructed\n";
}

JustTesting::~JustTesting()
{
	cout << words << " destroyed\n";
}

void JustTesting::show() const
{
	cout << words << ", " << number << endl;
}



int main()
{
	{
		char * buffer = new char[BUF];

		JustTesting *pc1, *pc2;

		pc1 = new (buffer) JustTesting;
		pc2 = new JustTesting("Heap1", 20);


		cout << "Memory block addresses:\n" << "buffer: "
			<< (void*)buffer << "    heap: " << pc2 << endl;
		cout << "Memory contents:\n";
		cout << pc1 << ": ";
		pc1->show();
		cout << pc2 << ": ";
		pc2->show();


		JustTesting *pc3, *pc4;
		pc3 = new (buffer + sizeof JustTesting) JustTesting("Bad Idea", 6);
		pc4 = new JustTesting("Heap2", 10);

		cout << "Memory contents:\n";
		cout << pc3 << ": ";
		pc3->show();
		cout << pc4 << ": ";
		pc4->show();


		delete pc4;
		pc3->~JustTesting();
		delete pc2;
		pc1->~JustTesting();
		delete[] buffer;

	}

	system("pause");
	return 0;
}