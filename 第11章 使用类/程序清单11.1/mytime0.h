#pragma once
#ifndef MYTIME0_H_
#define MYTIME0_H_

class Time
{
public:
	Time();
	~Time();

	Time(int h, int m = 0);

	void AddMin(int m);
	void Addhr(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time& t) const;
	void Show() const;
private:
	int hours;
	int minutes;
};


#endif
