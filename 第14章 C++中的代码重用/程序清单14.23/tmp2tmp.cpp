// 程序清单14.23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename T> void counts();
template <typename T> void reports(T &);


template <typename TT>
class HasFriendT
{
public:
	HasFriendT(const TT& i) :item(i) { _ct++; };
	~HasFriendT() { _ct--; };

	friend void counts<TT>();
	friend void reports<>(HasFriendT<TT> &);

private:
	TT item;
	static int _ct;
};

template <typename T>
int HasFriendT<T>::_ct = 0;

template <typename T>
void counts()
{
	cout << "template size: " << sizeof HasFriendT<T> << "; ";
	cout << "template counts: " << HasFriendT<T>::_ct << endl;
}

template <typename T>
void reports(T& hf)
{
	cout << hf.item << endl;
}



int main()
{
	{
		
		counts<int>();

		HasFriendT<int> hfi1(10);
		HasFriendT<int> hfi2(20);
		HasFriendT<double> hfdb(10.5);

	
		reports(hfi1);
		reports(hfi2);
		reports(hfdb);

		cout << "counts<int>() output: \n";
		counts<int>();

		cout << "counts<double>() output: \n";
		counts<double>();

	}


	system("pause");
	return 0;
}

