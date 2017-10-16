#include "stdafx.h"
#include "studenti.h"

double Student::Average() const
{
	if (valarray<double>::size() > 0)
	{
		return valarray<double>::sum() / valarray<double>::size();
	}

	return 0.0;
}

const string & Student::Name() const
{
	return (const string &)*this;
}

double & Student::operator[](int i)
{
	return valarray<double>::operator[](i);
}

double Student::operator[](int i) const
{
	return valarray<double>::operator [](i);
}

ostream & Student::arr_out(ostream & os) const
{
	int i;
	int lim = valarray<double>::size();
	if (lim > 0)
	{
		for ( i = 0; i < lim; i++)
		{
			os << valarray<double>::operator[](i) << " ";
			if (i % 5 == 4)
			{
				os << endl;
			}
		}

		if (i % 5 != 0)
		{
			os << endl;
		}
	}
	else
	{
		os << "empty array ";
	}

	return os;
}

istream & operator >> (istream & is, Student & s)
{
	is >> (string &)s;

	return is;
}

ostream & operator<<(ostream & os, Student & s)
{
	os << "Scores for " << (const string &)s << ":\n";
	s.arr_out(os);
	return os;
}

istream & getline(istream & is, Student & s)
{
	getline(is, (string &)s);
	return is;
}
