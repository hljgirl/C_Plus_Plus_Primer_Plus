#include "stdafx.h"
#include "brass.h"

#include <iostream>


typedef ios_base::fmtflags format;
typedef streamsize precis;
format setFormat();
void restore(format f, precis p);

Brass::Brass(const string & s, long an, double bal)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}

Brass::~Brass()
{
}

void Brass::Deposit(double amt)
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

void Brass::WithDraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0)
	{
		cout << "Withdrawal amount must be positive; "
			<< "withdrawal cancelled.\n";
	}
	else if (amt <= balance)
	{
		balance -= amt;
	}
	else
	{
		cout << "Withdrawal amount of $" << amt
			<< " exceeds your balance.\n"
			<< "Withdrawal canceled.\n";
	}

	restore(initialState, prec);
}

void Brass::ViewAcct() const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	cout << "Client: " << fullName << endl;
	cout << "Account Number: " << acctNum << endl;
	cout << "Balance: $" << balance << endl;

	restore(initialState, prec);
}

BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r)
	:Brass(s, an, bal)
{	
	maxLoan = ml;
	rate = r;
	owesBank = 0.0;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
	:Brass(ba)
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
	format initialState = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAcct();
	cout << "Maximum loan: " << maxLoan << endl;
	cout << "Owed to bank: " << owesBank << endl;

	cout.precision(3);

	cout << "Loan Rate: " << rate * 100 << "%\n";

	restore(initialState, prec);
}

void BrassPlus::WithDraw(double amt)
{

	format initialState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();

	if (amt <= bal)
	{
		Brass::WithDraw(amt);
	}
	else if (amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Finance charge: $" << advance * rate << endl;
		Deposit(advance);
		Brass::WithDraw(amt);
	}
	else
	{
		cout << "Credit limit exceeded. Transaction cancelled.\n";
	}

	restore(initialState, prec);

}

format setFormat()
{
	return cout.setf(ios_base::fixed,ios_base::floatfield);
}

void restore(format f, precis p)
{
	cout.setf(f, ios_base::floatfield);
	cout.precision(p);
}
