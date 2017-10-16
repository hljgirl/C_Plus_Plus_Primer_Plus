#pragma once
#ifndef QUEUETP_H_
#define  QUEUETP_H_

template <class Item>
class QueueTP
{
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();


	bool isempty() const { return items == 0; };
	bool isfull() const { return items == qsize; };
	int queuecount() const { return items; };
	bool enqueue(const Item &);
	bool dequeue(Item &);

private:
	enum { Q_SIZE = 10 };
	class Node 
	{ 
	public:
		Item item;
		Node * next;
		Node(const Item& i) :item(i), next(0) {};
	};
	
	Node * front;
	Node * rear;
	int items;
	const int qsize;

	QueueTP(const QueueTP & q) :qsize(0) {};
	QueueTP & operator=(const QueueTP & q) { return *this; };
};




template<class Item>
QueueTP<Item>::QueueTP(int qs) :qsize(qs)
{
	front = nullptr;
	rear = nullptr;
	items = 0;
}

template<class Item>
QueueTP<Item>::~QueueTP()
{
	Node* temp;

	while (front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template<class Item>
bool QueueTP<Item>::enqueue(const Item & item)
{
	if (isfull())
		return false;

	Node* add = new Node(item);
	items++;

	if (front == nullptr)
	{
		front = add;
	}
	else
	{
		rear->next = add;
	}
	rear = add;

	return true;
}

template<class Item>
bool QueueTP<Item>::dequeue(Item & item)
{
	if (isempty())
		return false;

	item = front->item;
	items--;

	Node* temp = front;
	front = front->next;
	delete temp;

	if (items == 0)
		rear = nullptr;


	return true;
}

#endif


