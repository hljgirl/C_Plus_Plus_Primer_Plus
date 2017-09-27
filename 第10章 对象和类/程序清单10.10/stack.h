#pragma once
#ifndef STACH_H_
#define STACH_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };
	Item item[MAX];
	int top;

public:
	Stack();
	~Stack();

	bool isempty() const;
	bool isfull() const;
	bool push(const Item& it);
	bool pop(Item& it);
};


#endif