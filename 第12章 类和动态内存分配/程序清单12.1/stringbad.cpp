#include "stringbad.h"

using namespace std;

int StringBad::num_string = 0;

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	strcpy(str, "C++");
	num_string++;

	cout << num_string << ": \"" << str
		<< "\" object created\n";
}


StringBad::StringBad(const char * s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_string++;

	cout << num_string << ": \"" << str
		<< "\" object created\n";
}


// StringBad::StringBad(const StringBad & s)
// {
// 	len = s.len;
// 	str = new char[len + 1];
// 	strcpy(str, s.str);
// 	num_string++;
// 
// 	cout << num_string << ": \"" << str
// 		<< "\" object created\n";
// }


StringBad::~StringBad()
{
	cout << "\"" << str << "\" object deleted, ";
	--num_string;
	cout << num_string << " left\n";
	delete[] str;
}





// StringBad & StringBad::operator=(const StringBad & s)
// {
// 	if (this == &s)
// 	{
// 		return *this;
// 	}
// 	delete[] str;
// 
// 	len = s.len;
// 	str = new char[len + 1];
// 	strcpy(str, s.str);
// 
// 	return *this;
// }

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
	os << st.str;
	return os;
}