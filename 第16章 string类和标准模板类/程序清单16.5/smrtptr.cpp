// 程序清单16.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Report
{
private:
	string str;
public:
	Report(const string s) :str(s) { cout << "Object created!\n"; };
	~Report() { cout << "Object deleted!\n"; };

	void comment() const { cout << str << endl; };
};


int main()
{

	{
		auto_ptr<Report> ps(new Report("using auto_ptr"));
		ps->comment();
	}

	{
		shared_ptr<Report> ps(new Report("using shared_ptr"));
		ps->comment();
	}

	{
		unique_ptr<Report> ps(new Report("using unique_ptr"));
		ps->comment();
	}

	system("pause");
    return 0;
}

