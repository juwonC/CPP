#include "Element.h"
#pragma once


class Queue
{
private:
	Element* mpHead;
	Element* mpTail;

private:
	enum Command
	{
		ENQUEUE = 1,
		DEQUEUE = 2,
		EXIT = 3
	};

public:
	Queue();
	void PrintInfo();
	void PrintQueue(Queue& queue);
	Element* Enqueue(Queue& queue, int value);
	bool Dequeue(Queue& queue);
	void ProcessUserInput(Queue& queue);
};

