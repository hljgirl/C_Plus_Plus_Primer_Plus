#pragma once
#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Student
{
public:
	Student() :name("Null Student"), scores() {};
	explicit Student(const string &s) :name(s), scores() {};
	explicit Student(int n) :name("Nully"), scores(n) {};
	Student(const string &s, int n) :name(s), scores(n) {};
	Student(const string &s, const valarray<double> & a) :name(s), scores(a) {};
	Student(const char *s, const double * pd, int n) :name(s), scores(pd, n) {};
	~Student() {};

	double Average() const;
	const string& Name() const;
	double & operator[](int i);
	double operator[](int i) const;

	friend istream& operator >> (istream& is, Student & s);
	friend ostream& operator<<(ostream& os, Student& s);
	friend istream& getline(istream& is, Student & s);


private:
	string name;
	valarray<double> scores;
	ostream & arr_out(ostream & os) const;
};


#endif