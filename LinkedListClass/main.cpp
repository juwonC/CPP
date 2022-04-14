#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
	LinkedList* pStack = new Stack;
	LinkedList* pQueue = new Queue;

	//pStack->PrintInfo();
	//pStack->ProcessUserInput();
	pQueue->PrintInfo();
	pQueue->ProcessUserInput();

	delete pQueue;
	delete pStack;
}