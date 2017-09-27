#pragma once
#ifndef STRING_H_
#define STRING_H_
#include <iostream>

class String
{
public:
	String();
	String(const char * s);
	String(const String &);
	~String();

	String & operator=(const String &);
	String & operator=(const char *);

	friend bool operator<(const String &, const String &);
	friend bool operator>(const String &, const String &);
	friend bool operator==(const String &, const String &);

	friend std::ostream & operator<<(std::ostream & os, const String & st);
	friend std::istream & operator>>(std::istream & os, String &);

	char & operator[](int i);
	const char & operator[](int i) const;

	int length() const { return len; };
	static int HowMany() { return num_string; };


private:
	char * str;
	int len;
	static int num_string;
	static const int CINLIM = 80;
};



#endif