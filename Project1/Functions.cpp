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
void LinkedQueue::pop()
{
	if(count == 0)
	{
		cerr << " Queue is empty.";
	}
	else
	{
		Node* temp = ptrToFront;
		ptrToFront = ptrToFront->getNext();
		delete temp;
		temp = nullptr;
		--count;

	}

}

// Definition function empty
bool LinkedQueue::empty()
{
	return (count == 0);
}

// Definition function front
int LinkedQueue::front()
{
	
}

// Definition function back


// Definition function size





