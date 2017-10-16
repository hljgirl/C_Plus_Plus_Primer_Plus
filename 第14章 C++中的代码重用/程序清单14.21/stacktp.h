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




template <class T>
Stack<T>::Stack()
{
	top = 0;
}

template <class T>
Stack<T>::~Stack()
{
	top = 0;
}

template <class T>
bool Stack<T>::isempty() const
{
	return top == 0;
}

template <class T>
bool Stack<T>::isfull() const
{
	return top == MAX;
}

template <class T>
bool Stack<T>::push(const T & it)
{
	if (top < MAX)
	{
		item[top++] = it;
		return true;
	}
	else
	{
		return false;
	}
}


template <class T>
bool Stack<T>::pop(T & it)
{
	if (top > 0)
	{
		it = item[--top];
		return true;
	}
	else
	{
		return false;
	}

	return false;
}
#endif