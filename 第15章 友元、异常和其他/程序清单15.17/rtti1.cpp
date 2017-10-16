// 程序清单15.17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

class Grand
{
private:
	int hold;
public:
	Grand(int h = 0) :hold(h) {};
	virtual ~Grand() {};
	virtual void Speak() const { cout << "I am a grand class!\n"; };
	virtual int Value() const { return hold; };
};

class Superb:public Grand
{
public:
	Superb(int h = 0) :Grand(h) {};
	virtual ~Superb() {};

	void Speak() const { cout << "I am a superb class!!\n"; };
	virtual void Say() const { cout << "I hold the superb value of " << Value() << "!\n"; };
};

class Magnificent:public Superb
{
private: 
	char ch;
public:
	Magnificent(int h = 0, char c = 'A') :Superb(h), ch(c) {};
	virtual ~Magnificent() {};

	void Speak() const { cout << "I am a magnificent class!!!\n"; };
	void Say() const { cout << "I hold the character  " << ch << " and the integer " << Value() << "!\n"; };
};

Grand* GetOne();

int main()
{
	srand(time(0));

	Grand* pg;
	Superb* ps;

	for (int i = 0; i < 5; i++)
	{
		pg = GetOne();
		pg->Speak();

		if (ps = dynamic_cast<Superb*>(pg))
		{
			ps->Say();
		}
	}


	system("pause");
    return 0;
}

Grand * GetOne()
{
	Grand* p = 0;

	switch (rand() % 3)
	{
	case 0:
		p = new Grand(rand() % 100);
		break;
	case 1:
		p = new Superb(rand() % 100);
		break;
	case 2:
		p = new Magnificent(rand() % 100, 'A' + rand() % 26);
		break;
	}

	return p;
}
