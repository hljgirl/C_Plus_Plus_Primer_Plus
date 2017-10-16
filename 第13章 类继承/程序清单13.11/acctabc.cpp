#include "stdafx.h"
#include <iostream>

#include "acctabc.h"


AcctABC::AcctABC(const string & s, long an, double bal)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}

AcctABC::~AcctABC()
{
}

void AcctABC::Deposit(double amt)
{
	if (amt < 0)
	{
		cout << "Negative deposit not allowed; "
			<< "deposit is cancelled.\n";
	}
	else
	{
		balance += amt;
	}
}

void AcctABC::WithDraw(double amt)
{
	balance -= amt;
}


AcctABC::Formatting AcctABC::setFormat() const
{
	Formatting f;
	f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
	f.pr = cout.precision(2);
	return f;
}

void AcctABC::restore(Formatting & f) const
{
	cout.setf(f.flag, ios_base::floatfield);
	cout.precision(f.pr);
}


Brass::~Brass()
{
}


void Brass::WithDraw(double amt)
{

	if (amt < 0)
	{
		cout << "Withdrawal amount must be positive; "
			<< "withdrawal cancelled.\n";
	}
	else if (amt <= Balance())
	{
		AcctABC::WithDraw(amt);
	}
	else
	{
		cout << "Withdrawal amount of $" << amt
			<< " exceeds your balance.\n"
			<< "Withdrawal canceled.\n";
	}
}

void Brass::ViewAcct() const
{
	AcctABC::Formatting f = setFormat();

	cout << "Brass Client: " << AcctABC::FullName() << endl;
	cout << "Account Number: " << AcctABC::AccNum() << endl;
	cout << "Balance: $" << Balance() << endl;

	restore(f);
}

BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r)
	:AcctABC(s, an, bal)
{	
	maxLoan = ml;
	rate = r;
	owesBank = 0.0;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
	:AcctABC(ba)
{
	maxLoan = ml;
	rate = r;
	owesBank = 0.0;
}

BrassPlus::~BrassPlus()
{
}

void BrassPlus::ViewAcct() const
{
	AcctABC::Formatting f = setFormat();

	
	cout << "Brass Client: " << AcctABC::FullName() << endl;
	cout << "Account Number: " << AcctABC::AccNum() << endl;
	cout << "Balance: $" << Balance() << endl;


	cout << "Maximum loan: " << maxLoan << endl;
	cout << "Owed to bank: " << owesBank << endl;

	cout.precision(3);

	cout << "Loan Rate: " << rate * 100 << "%\n";

	restore(f);
}

void BrassPlus::WithDraw(double amt)
{

	AcctABC::Formatting f = setFormat();

	double bal = Balance();

	if (amt <= bal)
	{
		AcctABC::WithDraw(amt);
	}
	else if (amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Finance charge: $" << advance * rate << endl;
		Deposit(advance);
		AcctABC::WithDraw(amt);
	}
	else
	{
		cout << "Credit limit exceeded. Transaction cancelled.\n";
	}

	restore(f);
}