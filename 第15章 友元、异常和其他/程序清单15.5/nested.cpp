// 程序清单15.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "queuetp.h"

using namespace std;

int main()
{
	{

		QueueTP<string> cs(5);
		string temp;

		while (!cs.isfull())
		{
			cout << "Please enter your name. You will be "
				"served in the order of arrival.\n"
				"name: ";

			getline(cin, temp);
			cs.enqueue(temp);

		}

		cout << "The queue is full. Processing begin!\n";

		while (!cs.isempty())
		{
			cs.dequeue(temp);
			cout << "Now processing " << temp << " ...\n";
		}
	}

	system("pause");
    return 0;
}

