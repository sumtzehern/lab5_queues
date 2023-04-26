/*
	(name header)
*/

#include "LinkedQueue.h"

#include<iostream>
using namespace std;

void LinkedQueue::clearQueue()
{ 
    Node  *temp; 
	
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
