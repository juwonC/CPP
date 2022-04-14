#pragma once
#include "LinkedList.h"

class Stack : public LinkedList
{
private:
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
	void Push(int value);
	bool Pop();
	void PrintInfo() const override;
	void PrintList() const override;
	void ProcessUserInput() override;
};

