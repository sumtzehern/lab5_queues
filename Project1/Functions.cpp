/*
	Wesley, Sum

	April 25, 2023

	CS A250
	Lab 5
*/

#include "LinkedQueue.h"

#include <iostream>
using namespace std;

// Definition function push
void LinkedQueue::push(int value)
{
	Node* newNode = new Node(value, nullptr);

	//queue is empty
	if(ptrToFront == nullptr)
	{
		ptrToFront = newNode;
		ptrToBack = newNode;
	}
	else
	{
		ptrToBack->setNext(newNode);
		ptrToBack = newNode;
	}

	++count;
}

// Definition function pop


// Definition function empty


// Definition function front


// Definition function back


// Definition function size





