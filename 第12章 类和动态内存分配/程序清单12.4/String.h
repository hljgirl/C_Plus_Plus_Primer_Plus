#pragma once
#ifndef STRING_H_
#define STRING_H_
#include <iostream>

class StringBad
{
public:
	StringBad();
	StringBad(const char * s);
	StringBad(const StringBad &);
	~StringBad();

	StringBad & operator=(const StringBad &);

	friend std::ostream & operator<<(std::ostream & os, const StringBad & st);

private:
	char * str;
	int len;
	static int num_string;
};



#endif