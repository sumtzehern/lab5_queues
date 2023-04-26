/*
	Wesley, Sum

	April 25, 2023

	CS A250
	Lab 5
*/

#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include <string>				

class Node
{
public:
	Node() : data(0), next(nullptr) {}
	Node(int theData, Node *newNext) : 
		data(theData), next(newNext){}
	Node* getNext() const { return next; }
	int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
	void setNext(Node *newNext) { next = newNext; }
	~Node(){}
private:
    int data;		
    Node *next;	//pointer that points to next node
};

class LinkedQueue
{
public:
	LinkedQueue() : ptrToFront(nullptr), 
		ptrToBack(nullptr), count(0) {}

	// Declaration function push
	// Parameter: An int storing a value.
	// Inserts value to the back of the queue.
	void push(int value);


	// Declaration function pop
	// Removes front value.
	void pop();


	// Declaration function empty
	// Returns true if the queue is empty,
	// and false otherwise.
	// Return: A Boolean type by value.
	// One statement only.
	bool empty();


	// Declaration function front
	// Returns the value stored at the
	// front of the queue.
	// Return: An int type by value.
	// One statement only.
	int front();


	// Declaration function back
	// Returns the value stored at the
	// back of the queue.
	// Return: An int type by value.
	// One statement only.


	// Declaration function size
	// Returns the size of the queue
	// as an unsigned integral size_t.
	// Return: An size_t type by value.
	// One statement only.


	void clearQueue();
	~LinkedQueue();

private:
	Node* ptrToFront;	
	Node* ptrToBack;
	size_t count;
};

#endif