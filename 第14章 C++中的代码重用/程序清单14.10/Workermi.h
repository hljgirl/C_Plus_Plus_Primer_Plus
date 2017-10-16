#pragma once
#ifndef WORKERMI_H_
#define WORKERMI_H_

#include <string>

using namespace std;

class Worker
{
public:
	Worker() :fullname("no one"), id(0L) {};
	Worker(const string &s, long n) :fullname(s), id(n) {};
	virtual ~Worker() = 0;

	virtual void Set() = 0;
	virtual void Show() const = 0;

protected:
	virtual void Data() const;
	virtual void Get();

private:
	string fullname;
	long id;
};


class Waiter : virtual public Worker
{
public:
	Waiter() :Worker(), panache(0) {};
	Waiter(const string &s, long n, int p = 0) : Worker(s, n), panache(p) {};
	Waiter(const Worker& wk, int p = 0) :Worker(wk), panache(0) {};
	~Waiter() {};

	void Set();
	void Show() const;
protected:
	void Data() const;
	void Get();

private:
	int panache;
};


class Singer : virtual public Worker
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

	void Data() const;
	void Get();

private:
	static char *pv[Vtypes];
	int voice;
};


class SingingWaiter : public Singer, public Waiter
{
public:
	SingingWaiter() {};
	SingingWaiter(const string & s, long n, int p = 0, int v = other)
		: Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {};
	SingingWaiter(const Worker& wk, int p = 0, int v = other)
		:Worker(wk), Waiter(wk, p), Singer(wk, v) {};
	SingingWaiter(const Waiter& wt, int v = other)
		:Worker(wt), Waiter(wt), Singer(wt, v) {};
	SingingWaiter(const Singer& wt, int p = 0)
		:Worker(wt), Waiter(wt, p), Singer(wt) {};
	~SingingWaiter() {};

	void Set();
	void Show() const;

protected:
	void Data() const;
	void Get();

private:

};


#endif