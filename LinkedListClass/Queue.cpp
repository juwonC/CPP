#include "Queue.h"

Queue::Queue() : mpHead{ nullptr }, mpTail{ nullptr }
{
}

Queue::~Queue()
{
}

void Queue::Enqueue(int value)
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

bool Queue::Dequeue()
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
	else if (mpHead == pCurrent)
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
	std::cout << std::endl;
	std::cout << "---------------------" << std::endl;
}

void Queue::ProcessUserInput()
{
	int command{};
	bool isExit{ false };

	while (true)
	{
		PrintList();

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
			case ENQUEUE:
			{
				int value;
				std::cout << "\tEnqueue value > ";
				std::cin >> value;
				Enqueue(value);
			}
				break;

			case DEQUEUE:
				Dequeue();
				break;

			case Command::EXIT:
				isExit = true;
				break;

			default:
				std::cout << "Incorrect Command" << std::endl;
				break;
		}
		if (isExit)
		{
			break;
		}
	}
}
