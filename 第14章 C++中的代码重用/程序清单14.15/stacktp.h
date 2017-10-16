#pragma once
#ifndef STACKTP1_H_
#define STACKTP1_H_


template <class T> class Stack
{
private:
	enum { MAX = 10 };
	int stacksize;
	T *item;
	int top;

public:
	explicit Stack(int ss = MAX);
	Stack(const Stack &);
	~Stack() { delete[] item; };

	bool isempty() const { return top == 0; };
	bool isfull() const { return top == stacksize; };
	bool push(const T& it);
	bool pop(T& it);
	Stack& operator=(const Stack & st);
};


template<class T>
inline Stack<T>::Stack(int ss) : stacksize(ss), top(0)
{
	item = new T[stacksize];
}

template<class T>
inline Stack<T>::Stack(const Stack & st)
{
	stacksize = st.stacksize;
	top = st.top;
	item = new T[stacksize];

	for (int i = 0; i < top; i++)
	{
		item[i] = st.item[i];
	}
}


template <class T>
bool Stack<T>::push(const T & it)
{
	if (top < stacksize)
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

template<class T>
inline Stack<T> & Stack<T>::operator=(const Stack<T> & st)
{

	if (this == &st)
	{
		return *this;
	}
	delete[] item;

	stacksize = st.stacksize;
	top = st.top;
	item = new T[stacksize];

	for (int i = 0; i < top; i++)
	{
		item[i] = st.item[i];
	}

	return *this;
}

#endif