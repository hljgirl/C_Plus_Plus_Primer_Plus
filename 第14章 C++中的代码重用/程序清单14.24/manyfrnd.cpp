// 程序清单14.24.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>

using namespace std;


template <typename T>
class ManyFriend
{
public:
	ManyFriend(const T& i) :item(i) {};
	~ManyFriend() {};

	template<typename C, typename D> friend void show2(C&, D&);

private:
	T item;
};

template<typename C, typename D>
void show2(C & c, D & d)
{
	cout << c.item << ", " << d.item << endl;
}

int main()
{

	{
		ManyFriend<int> hfi1(10);
		ManyFriend<int> hfi2(20);
		ManyFriend<double> hfdb(10.5);

		cout << "hfi1, hfi2: ";
		show2(hfi1, hfi2);


		cout << "hfdb, hfi2: ";
		show2(hfdb, hfi2);


	}
	system("pause");
	return 0;
}


