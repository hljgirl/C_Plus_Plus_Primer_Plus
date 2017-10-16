#pragma once
#ifndef BRASS_H_
#define BRASS_H_

#include <string>

using namespace std;

class Brass
{
public:
	Brass(const string & s = "NullBody", long an = -1, double bal = 0.0);
	virtual ~Brass();

	void Deposit(double amt);
	virtual void WithDraw(double amt);
	double Balance() const { return balance; };
	virtual void ViewAcct() const;

private:
	string fullName;
	long acctNum;
	double balance;
};


class BrassPlus :public Brass
{
public:
	BrassPlus(const string & s = "NullBody", long an = -1, 
		double bal = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(const Brass & ba, double ml = 500, double r = 0.11125);
	~BrassPlus();

	virtual void ViewAcct() const;
	virtual void WithDraw(double amt);

	void ResetMax(double m) { maxLoan = m; };
	void ResetRate(double r) { rate = r; };
	void ResetOwes() { owesBank = 0.0; };

private:
	double maxLoan;
	double rate;
	double owesBank;
};


#endif
