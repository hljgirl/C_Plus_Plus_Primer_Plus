#include "stdafx.h"
#include "studentc.h"

double Student::Average() const
{
	if (scores.size() > 0)
	{
		return scores.sum() / scores.size();
	}

	return 0.0;
}

const string & Student::Name() const
{
	return name;
}

double & Student::operator[](int i)
{
	return scores[i];
}

double Student::operator[](int i) const
{
	return scores[i];
}

ostream & Student::arr_out(ostream & os) const
{
	int i;
	int lim = scores.size();
	if (lim > 0)
	{
		for ( i = 0; i < lim; i++)
		{
			os << scores[i] << " ";
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
	is >> s.name;

	return is;
}

ostream & operator<<(ostream & os, Student & s)
{
	os << "Scores for " << s.name << ":\n";
	s.arr_out(os);
	return os;
}

istream & getline(istream & is, Student & s)
{
	getline(is, s.name);
	return is;
}
