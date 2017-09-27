#pragma once
#ifndef QUEUE_H_
#define  QUEUE_H_

#include "Customer.h"

typedef Customer Item;

class Queue
{
public:
	Queue(int qs = Q_SIZE);
	~Queue();

	Queue(const Queue &) = delete;
	Queue & operator=(const Queue &) = delete;

	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item &);
	bool dequeue(Item &);

private:
	struct Node { Item item; Node * next; };
	enum { Q_SIZE = 10 };
	Node * front;
	Node * rear;
	int items;
	const int qsize;
};

#endif