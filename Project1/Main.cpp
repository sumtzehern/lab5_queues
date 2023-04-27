/*
	Wesley, Sum

	April 25, 2023

	CS A250
	Lab 5
*/

#include "LinkedQueue.h"

#include <iostream>
using namespace std;

int main()
{
	// Write your testing cases
	LinkedQueue aQueue;

	//push 
	aQueue.push(1);
	aQueue.push(2);
	aQueue.push(3);

	//size method
	cout << "Size of queue: " << aQueue.size() << endl;

	//front and back
	cout << "Front of queue: " << aQueue.front() << endl;
	cout << "Back of queue: " << aQueue.back() << endl;

	//empty method
	if (aQueue.empty())
	{
		cout << "Queue is empty." << endl;
	}
	else
	{
		cout << "Queue is not empty." << endl;
	}

	//pop
	//aQueue.pop();

	//clearQueue 
	aQueue.clearQueue();

	cout << "Size of queue after clearing: " << aQueue.size() << endl;
	
	cout << "\n";
	return 0;
}

