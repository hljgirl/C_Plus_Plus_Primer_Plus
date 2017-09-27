#include "stdafx.h"
#include "stack.h"

Stack::Stack()
{
	top = 0;
}

Stack::~Stack()
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & it)
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

bool Stack::pop(Item & it)
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
