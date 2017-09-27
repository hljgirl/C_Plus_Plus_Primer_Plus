#include "string2.h"

using namespace std;

int String::num_string = 0;

String::String()
{
	len = 0;
	str = new char[1];
	str[0] = '\0';
	num_string++;

	//cout << num_string << ": \"" << str	<< "\" object created\n";
}


String::String(const char * s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_string++;

	//cout << num_string << ": \"" << str	<< "\" object created\n";
}

String::String(const String & s)
{
	num_string++;
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);

	//cout << num_string << ": \"" << str	<< "\" object created\n";
}


String::~String()
{
	--num_string;
	delete[] str;

	//cout << "\"" << str << "\" object deleted, " << num_string << " left\n";
}

String & String::operator=(const String & s)
{
	if (this == &s)
	{
		return *this;
	}
	delete[] str;

	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);

	return *this;
}

String & String::operator=(const char * s)
{
	delete[] str;

	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);

	return *this;
}

char & String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}

bool operator<(const String & s1, const String & s2)
{
	return (strcmp(s1.str, s2.str) < 0);
}

bool operator>(const String & s1, const String & s2)
{
	return s2 < s1;
}

bool operator==(const String & s1, const String & s2)
{
	return (strcmp(s1.str, s2.str) == 0);
}

std::ostream & operator<<(std::ostream & os, const String & st)
{
	os << st.str;
	return os;
}

std::istream & operator >> (std::istream & is, String & s)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);

	if (is)
		s = temp;

	while (is && is.get() != '\n')
		continue;

	return is;
}
