// 程序清单16.15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

template <class T>
class TooBig
{
private:
	T cutoff;
public:
	TooBig(const T& t) :cutoff(t) {};
	~TooBig() {};

	bool operator()(const T& v) { return v > cutoff; };
};

void outint(int n) { cout << n << " "; };

int main()
{
	TooBig<int> f100(100);
	int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

	list<int> yadayada(vals, vals + 10);
	list<int> etcetera(vals, vals + 10);

	cout << "Original lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;

	yadayada.remove_if(f100);
	etcetera.remove_if(TooBig<int>(200));

	cout << "Trimmed lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;


	system("pause");
    return 0;
}

