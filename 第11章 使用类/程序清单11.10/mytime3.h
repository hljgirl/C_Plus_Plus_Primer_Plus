#pragma once
#ifndef MYTIME3_H_
#define MYTIME3_H_

class Time
{
public:
	Time();
	~Time();

	Time(int h, int m = 0);

	void AddMin(int m);
	void Addhr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(double mult) const;

	friend Time operator*(double mult, const Time & t) { return t * mult; };
	friend std::ostream & operator<<(std::ostream & os, const Time & t);

private:
	int hours;
	int minutes;
};


#endif