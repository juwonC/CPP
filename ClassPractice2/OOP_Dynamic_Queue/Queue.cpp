#include <iostream>
#include "Queue.h"

Queue::Queue() : mpHead { nullptr }, mpTail { nullptr }
{
}

void Queue::PrintInfo()
{
    std::cout << "<QUEUE>" << std::endl <<
        "[1] : ENQUEUE" << std::endl <<
        "[2] : DEQUEUE" << std::endl <<
        "[3] : EXIT" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void Queue::PrintQueue(Queue& queue)
{
    Element* p = queue.mpHead;
    std::cout << "<QUEUE>" << std::endl;

    if (p == nullptr)
    {
        std::cout << "EMPTY" << std::endl;
    }

    while (p != nullptr)
    {
        std::cout << p->GetValue() << " ";

        p = p->GetNextPointer();
    }
    std::cout << std::endl << "----------------------";
}

Element* Queue::Enqueue(Queue& queue, int value)
{
    Element* pNew = new Element;

    pNew->SetValue(value);
    pNew->SetNextPointer(nullptr);

    if (queue.mpTail == nullptr)
    {
        queue.mpHead = pNew;
    }
    else
    {
        queue.mpTail->SetNextPointer(pNew);
    }
    queue.mpTail = pNew;

    return pNew;
}

bool Queue::Dequeue(Queue& queue)
{
    Element* pCurrent = queue.mpHead;

    if (pCurrent == nullptr)
    {
        return false;
    }

    if (queue.mpHead == queue.mpTail)
    {
        queue.mpHead = queue.mpTail = nullptr;
    }
    else if (queue.mpHead == pCurrent)
    {
        queue.mpHead = pCurrent->GetNextPointer();
    }
    std::cout << pCurrent->GetValue() << " DEQUEUE!" << std::endl;
    delete pCurrent;

    return false;
}

void Queue::ProcessUserInput(Queue& queue)
{
    int command{};
    bool isExit{ false };

    while (true)
    {
        PrintQueue(queue);

        std::cout << std::endl;
        std::cout << "> ";
        std::cin >> command;

        switch (command)
        {
            case ENQUEUE:
            {
                int value;
                std::cout << "   Enqueue value > ";
                std::cin >> value;
                Enqueue(queue, value);
            }
                break;

            case DEQUEUE:
                Dequeue(queue);
                break;

            case EXIT:
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
