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

	// Test the push method
	aQueue.push(1);
	aQueue.push(2);
	aQueue.push(3);

	// Test the size method
	cout << "Size of queue: " << aQueue.size() << endl;

	// Test the front and back methods
	cout << "Front of queue: " << aQueue.front() << endl;
	cout << "Back of queue: " << aQueue.back() << endl;

	// Test the empty method
	if (aQueue.empty())
	{
		cout << "Queue is empty." << endl;
	}
	else
	{
		cout << "Queue is not empty." << endl;
	}

	// Test the pop method
	aQueue.pop();

	// Test the clearQueue method
	aQueue.clearQueue();

	// Test the size method after clearing the queue
	cout << "Size of queue after clearing: " << aQueue.size() << endl;
	
	cout << "\n";
	return 0;
}

