#pragma once
#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_
#include <iostream>

using namespace std;

class bad_hmean
{
public:
	bad_hmean(double a = 0, double b = 0):v1(a),v2(b) {};
	~bad_hmean() {};

	void mesg();

private:
	double v1;
	double v2;
};

inline void bad_hmean::mesg()
{
	cout << "hmean(" << v1 << ", " << v2 << "): "
		<< "invalid arguments: a = -b\n";
}

class bad_gmean
{
public:
	bad_gmean(double a, double b) :v1(a), v2(b) {};
	~bad_gmean() {};


	double v1;
	double v2;

	const char * mesg();
private:

};

inline const char * bad_gmean::mesg()
{
	return "gmean() arguments should be >=0 \n";
}


#endif
