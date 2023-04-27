/*
	Wesley, Sum

	April 25, 2023

	CS A250
	Lab 5
*/

#include "LinkedQueue.h"

#include<iostream>
using namespace std;

void LinkedQueue::clearQueue()
{ 
    Node  *temp = nullptr; 
	
	while (ptrToFront != nullptr)
    {
		temp = ptrToFront;
		ptrToFront = ptrToFront->getNext();
        delete temp;
		temp = nullptr;
    }
	ptrToBack = nullptr;
	count = 0;
}

LinkedQueue::~LinkedQueue()
{
	clearQueue();
}
