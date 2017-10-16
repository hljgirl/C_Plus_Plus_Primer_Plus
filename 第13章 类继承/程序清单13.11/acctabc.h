#pragma once
#ifndef ACCTABC_H_
#define ACCTABC_H_

#include <string>

using namespace std;

class AcctABC
{
public:
	AcctABC(const string & s = "NullBody", long an = -1, double bal = 0.0);
	virtual ~AcctABC();

	void Deposit(double amt);
	double Balance() const { return balance; };
	virtual void ViewAcct() const = 0;
	virtual void WithDraw(double amt) = 0;

private:
	string fullName;
	long acctNum;
	double balance;

protected:

	struct Formatting
	{
		ios_base::fmtflags flag;
		streamsize pr;
	};

	Formatting setFormat() const;

	void restore(Formatting &f) const;

	const string & FullName() const { return fullName; };
	long AccNum() const { return acctNum; };
};



class Brass : public AcctABC
{
public:
	Brass(const string & s = "NullBody", long an = -1, double bal = 0.0)
		:AcctABC(s, an, bal) {};
	virtual ~Brass();

	virtual void WithDraw(double amt);
	virtual void ViewAcct() const;
};


class BrassPlus : public AcctABC
{
public:
	BrassPlus(const string & s = "NullBody", long an = -1, 
		double bal = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(const Brass & ba, double ml = 500, double r = 0.11125);
	virtual ~BrassPlus();


	virtual void WithDraw(double amt);
	virtual void ViewAcct() const;

	void ResetMax(double m) { maxLoan = m; };
	void ResetRate(double r) { rate = r; };
	void ResetOwes() { owesBank = 0.0; };

private:
	double maxLoan;
	double rate;
	double owesBank;
};


#endif
