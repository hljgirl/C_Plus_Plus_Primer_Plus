// 程序清单14.20.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;




template<class T>
class beta
{
public:
	beta(T t, int i) :q(t), n(i) {};

	~beta() {};

	template<typename U>
	U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; };

	void Show() const { q.Show(); n.Show(); };

private:


	template <class V>
	class hold
	{
	public:
		hold(V v = 0) :val(v) {};
		~hold() {};

		void Show() const { cout << val << endl; };
		V Value() const { return val; };

	private:
		V val;
	};

	hold<T> q;
	hold<int> n;

};





int main()
{
	beta<double> guy(3.5, 3);
	cout << "T was set to double\n";
	guy.Show();
	cout << "V was set to T, which is double, then V was set to int\n";

	cout << guy.blab(10, 2.3) << endl;
	cout << "U was set to int\n";

	cout << guy.blab(10.0, 2.3) << endl;
	cout << "U was set to double\n";

	cout << "Done!\n";

	system("pause");
    return 0;
}

