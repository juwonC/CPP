#include "Element.h"
#pragma once

class Stack
{
private:
	Element* mpTop;

private:
	enum Command
	{
		PUSH = 1,
		POP = 2,
		EXIT = 3
	};

public:
	Stack();
	void PrintInfo();
	void PrintStack(Stack& stack);
	Element* Push(Stack& stack, int value);
	bool Pop(Stack& stack);
	void ProcessUserInput(Stack& stack);
};

