#pragma once
#ifndef WORKER0_H_
#define WORKER0_H_

#include <string>

using namespace std;

class Worker
{
public:
	Worker() :fullname("no one"), id(0L) {};
	Worker(const string &s, long n) :fullname(s), id(n) {};
	virtual ~Worker() = 0;

	virtual void Set();
	virtual void Show() const;

private:
	string fullname;
	long id;
};


class Waiter : public Worker
{
public:
	Waiter() :Worker(), panache(0) {};
	Waiter(const string &s, long n, int p = 0) : Worker(s, n), panache(p) {};
	Waiter(const Worker& wk, int p = 0) :Worker(wk), panache(0) {};
	~Waiter() {};

	void Set();
	void Show() const;

private:
	int panache;
};


class Singer : public Worker
{
public:
	Singer() :Worker(), voice(other) {};
	Singer(const string& s, long n, int v = other) :Worker(s, n), voice(v) {};
	Singer(const Worker& wk, int v = other) :Worker(wk), voice(v) {};
	~Singer() {};

	void Set();
	void Show() const;

protected:
	enum {other, alto, contralto, soprano, bass, baritone, tenor};
	enum {Vtypes = 7};

private:
	static char *pv[Vtypes];
	int voice;
};


#endif