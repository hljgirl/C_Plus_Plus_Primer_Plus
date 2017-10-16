#pragma once
#ifndef STACKTP_H_
#define STACKTP_H_


template <class T> class Stack
{
private:
	enum { MAX = 10 };
	T item[MAX];
	int top;

public:
	Stack();
	~Stack();

	bool isempty() const;
	bool isfull() const;
	bool push(const T& it);
	bool pop(T& it);
};


#endif