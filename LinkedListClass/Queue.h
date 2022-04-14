#pragma once
#include "LinkedList.h"

class Queue : public LinkedList
{
private:
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
	void Enqueue(int value);
	bool Dequeue();
	void PrintInfo() const override;
	void PrintList() const override;
	void ProcessUserInput() override;
};

