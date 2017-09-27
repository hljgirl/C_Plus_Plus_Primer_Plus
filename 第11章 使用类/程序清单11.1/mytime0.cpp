#include "stdafx.h"
#include <iostream>
#include "mytime0.h"


Time::Time()
{
	hours = 0;
	minutes = 0;
}

Time::~Time()
{
	hours = 0;
	minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::Addhr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::Sum(const Time & t) const
{
	Time answer;
	answer.minutes = minutes + t.minutes;
	answer.hours = hours + t.hours + answer.minutes / 60;
	answer.minutes = answer.minutes % 60;

	return answer;
}

void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}
