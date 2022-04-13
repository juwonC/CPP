#include "Queue.h"

Queue::Queue() : mCount{ 0 }, mpHead{ nullptr }, mpTail{ nullptr }
{
}

Queue::~Queue()
{
}

void Queue::ENQUEUE(int value)
{
	LinkedList* element = new LinkedList;

	element->SetValue(value);
	element->SetNextPointer(nullptr);

	if (mpTail == nullptr)
	{
		mpHead = element;
	}
	else
	{
		mpTail->SetNextPointer(element);
	}
	mpTail = element;
	mCount++;
}

bool Queue::DEQUEUE()
{
	LinkedList* pCurrent = mpHead;

	if (mCount == 0)
	{
		std::cout << "QUEUE is EMPTY" << std::endl;

		return false;
	}

	if (mpHead == mpTail)
	{
		mpHead = mpTail = nullptr;
	}
	else if (mpHead = pCurrent)
	{
		mpHead = pCurrent->GetNextPointer();
	}
	mCount--;

	std::cout << pCurrent->GetValue() << " DEQUEUE" << std::endl;
	delete pCurrent;

	return false;
}

void Queue::PrintInfo() const
{
	std::cout << "<QUEUE>" << std::endl <<
		"[1] : ENQUEUE" << std::endl <<
		"[2] : DEQUEUE" << std::endl <<
		"[3] : EXIT" << std::endl;
	std::cout << "---------------------" << std::endl;
}

void Queue::PrintList() const
{
	LinkedList* element = mpHead;
	std::cout << "<QUEUE>" << std::endl;

	if (element == nullptr)
	{
		std::cout << "EMPTY" << std::endl;
	}

	while (element != nullptr)
	{
		std::cout << element->GetValue() << " ";

		element = element->GetNextPointer();
	}

	std::cout << "---------------------" << std::endl;
}
