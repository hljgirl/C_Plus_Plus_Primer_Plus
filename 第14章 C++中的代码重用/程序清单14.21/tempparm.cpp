// 程序清单14.21.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "stacktp.h"

using namespace std;

template <template<typename T>class Thing>
class Crab
{
public:
	Crab() {};
	~Crab() {};

	bool push(int a, double x) { return s1.push(a) && s2.push(x); };
	bool pop(int& a, double& x) { return s1.pop(a) && s2.pop(x); };

private:
	Thing<int> s1;
	Thing<double> s2;
};


int main()
{
	{
		Crab<Stack> nebula;

		int ni;
		double nb;

		cout << "Enter int double pairs, such as 4  3.5(0 to end): \n";
		while (cin >> ni >> nb && ni > 0 && nb > 0)
		{
			if (!nebula.push(ni,nb))
			{
				break;
			}
		}

		while (nebula.pop(ni,nb))
		{
			cout << ni << ", " << nb << endl;
		}

	}

	cout << "Done!\n";
	system("pause");
    return 0;
}

