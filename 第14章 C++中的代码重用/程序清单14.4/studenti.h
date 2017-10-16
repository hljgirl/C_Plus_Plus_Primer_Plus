#pragma once
#ifndef STUDENTI_H_
#define STUDENTI_H_

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Student: private string, private valarray<double>
{
public:
	Student() :string("Null Student"), valarray<double>() {};
	explicit Student(const string &s) :string(s), valarray<double>() {};
	explicit Student(int n) :string("Nully"), valarray<double>(n) {};
	Student(const string &s, int n) :string(s), valarray<double>(n) {};
	Student(const string &s, const valarray<double> & a) :string(s), valarray<double>(a) {};
	Student(const char *s, const double * pd, int n) :string(s), valarray<double>(pd, n) {};
	~Student() {};

	double Average() const;
	const string& Name() const;
	double & operator[](int i);
	double operator[](int i) const;

	friend istream& operator >> (istream& is, Student & s);
	friend ostream& operator<<(ostream& os, Student& s);
	friend istream& getline(istream& is, Student & s);


private:
	ostream & arr_out(ostream & os) const;
};


#endif