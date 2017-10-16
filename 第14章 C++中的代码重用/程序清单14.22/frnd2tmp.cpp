// 程序清单14.22.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename T>
class HasFriend
{
public:
	HasFriend(const T& i) :item(i) { _ct++; };
	~HasFriend() { _ct--; };

	friend void counts();
	friend void reports(HasFriend<T> &);

private:
	T item;
	static int _ct;
};

template <typename T>
int HasFriend<T>::_ct = 0;

void counts()
{
	cout << "int count: " << HasFriend<int>::_ct << "; ";
	cout << "double count: " << HasFriend<double>::_ct << endl;
}


void reports(HasFriend<int>& hf)
{
	cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double>& hf)
{
	cout << "HasFriend<double>: " << hf.item << endl;
}



int main()
{
	{
		cout << "No objects declared: ";
		counts();

		HasFriend<int> hfi1(10);
		cout << "After hfi1 declared: ";
		counts();

		HasFriend<int> hfi2(10);
		cout << "After hfi2 declared: ";
		counts();


		HasFriend<double> hfdb(10.5);
		cout << "After hfdb declared: ";
		counts();

		reports(hfi1);
		reports(hfi2);
		reports(hfdb);
	}


	system("pause");
    return 0;
}


