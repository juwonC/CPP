#pragma once
#include "LinkedList.h"

class Stack : public LinkedList
{
private:
	int mCount;
	LinkedList* mpTop;

private:
	enum Command
	{
		PUSH = 1,
		POP = 2,
		EXIT = 3
	};

public:
	Stack();
	~Stack();
	
public:
	void PUSH(int value);
	bool POP();
	void PrintInfo() const override;
	void PrintList() const override;
};

