#pragma once
#ifndef ARRAYTP_H_
#define ARRAYTP_H_

#include <iostream>
using namespace std;

template <class T, int n>
class ArrayTP
{
public:
	ArrayTP() {};
	explicit ArrayTP(const T & v);
	~ArrayTP() {};

	virtual T& operator[](int i);
	virtual T operator[](int i) const;

private:
	T ar[n];
};


#endif

template<class T, int n>
inline ArrayTP<T, n>::ArrayTP(const T & v)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] = v;
	}
}

template<class T, int n>
inline T & ArrayTP<T, n>::operator[](int i)
{
	if (i < 0 || i > n)
	{
		cerr << "Error in array limits: " << i
			<< " is out of range\n";
		exit(EXIT_FAILURE);
	}

	return ar[i];
}

template<class T, int n>
inline T ArrayTP<T, n>::operator[](int i) const
{
	if (i < 0 || i > n)
	{
		cerr << "Error in array limits: " << i
			<< " is out of range\n";
		exit(EXIT_FAILURE);
	}

	return ar[i];
}
