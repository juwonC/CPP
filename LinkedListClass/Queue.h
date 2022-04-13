#pragma once
#include "LinkedList.h"

class Queue : public LinkedList
{
private:
	int mCount;
	LinkedList* mpHead;
	LinkedList* mpTail;

private:
	enum Command
	{
		ENQUEUE = 1,
		DEQUEUE = 2,
		EXIT = 3
	};

public:
	Queue();
	~Queue();
	
public:
	void ENQUEUE(int value);
	bool DEQUEUE();
	void PrintInfo() const override;
	void PrintList() const override;
};

