#pragma once
#ifndef PAIRS_H_
#define PAIRS_H_

template <class T1, class T2>
class Pair
{
public:
	Pair(const T1& aval, const T2 & bval) :a(aval), b(bval) {};
	Pair() {};
	~Pair() {};


	T1 & first();
	T2 & second();

	T1 first() const { return a; };
	T2 second() const { return b; };

private:
	T1 a;
	T2 b;
};


#endif

template<class T1, class T2>
inline T1 & Pair<T1, T2>::first()
{
	return a;
}

template<class T1, class T2>
inline T2 & Pair<T1, T2>::second()
{
	return b;
}
