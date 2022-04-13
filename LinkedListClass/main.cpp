#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
	LinkedList* pStack = new Stack;
	LinkedList* pQueue = new Queue;

	pStack->PrintInfo();
	pQueue->PrintInfo();

	delete pQueue;
	delete pStack;
}