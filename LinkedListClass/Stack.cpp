#include "Stack.h"

Stack::Stack() : mCount{ 0 }, mpTop{ nullptr }
{
}

Stack::~Stack()
{
}

void Stack::PUSH(int value)
{
	LinkedList* element = new LinkedList;
	element->SetValue(value);
	element->SetNextPointer(mpTop);

	mpTop = element;
	mCount++;
}

bool Stack::POP()
{
	LinkedList* pCurrent = mpTop;

	if (mCount == 0)
	{
		std::cout << "STACK is EMPTY" << std::endl;

		return false;
	}

	mpTop = pCurrent->GetNextPointer();
	mCount--;

	std::cout << pCurrent->GetValue() << " POP!" << std::endl;
	delete pCurrent;
	
	return false;
}

void Stack::PrintInfo() const
{
	std::cout << "<STACK>" << std::endl <<
		"[1] : PUSH" << std::endl <<
		"[2] : POP" << std::endl <<
		"[3] : EXIT" << std::endl;
	std::cout << "---------------------" << std::endl;

}

void Stack::PrintList() const
{
	LinkedList* element = mpTop;
	std::cout << "<STACK>" << std::endl;

	while (element != nullptr)
	{
		std::cout << element->GetValue() << std::endl;

		element = element->GetNextPointer();
	}

	std::cout << "---------------------" << std::endl;
}
