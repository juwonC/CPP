#include "Element.h"
#pragma once

enum Command
{
	PUSH = 1,
	POP = 2,
	EXIT = 3
};

class Stack
{
private:
	Element* mpTop;

public:
	Stack();
	void PrintInfo();
	void PrintStack(Stack& stack);
	Element* Push(Stack& stack, int value);
	bool Pop(Stack& stack);
	void ProcessUserInput(Stack& stack);
};

