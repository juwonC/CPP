#include <iostream>
#include "Stack.h"

void Stack::PrintInfo()
{
    std::cout << "<STACK>" << std::endl <<
        "[1] : PUSH" << std::endl <<
        "[2] : POP" << std::endl <<
        "[3] : EXIT" << std::endl;
    std::cout << "-------------------" << std::endl;
}

void Stack::PrintStack(Stack& stack)
{
    Element* p = stack.mpTop;
    std::cout << "<STACK>" << std::endl;

    if (p == nullptr)
    {
        std::cout << "EMPTY" << std::endl;
    }

    while (p != nullptr)
    {
        std::cout << p->GetValue() << std::endl;

        p = p->GetNextPointer();
    }

    std::cout << "---------------";

}

Element* Stack::Push(Stack& stack, int value)
{
    Element* pNew = new Element;

    pNew->SetValue(value);

    pNew->SetNextPointer(stack.mpTop);
    stack.mpTop = pNew;

    return pNew;
}

bool Stack::Pop(Stack& stack)
{
    Element* pCurrent = stack.mpTop;

    if (pCurrent == nullptr)
    {
        return false;
    }

    stack.mpTop = pCurrent->GetNextPointer();

    std::cout << pCurrent->GetValue() << "  POP!" << std::endl;
    delete pCurrent;
    
    return false;
}

void Stack::ProcessUserInput(Stack& stack)
{
    int command{};
    bool isExit{ false };

    while (true)
    {
        PrintStack(stack);

        std::cout << std::endl;
        std::cout << "> ";
        std::cin >> command;

        switch (command)
        {
            case PUSH:
            {
                int value;
                std::cout << "    push value > ";
                std::cin >> value;
                Push(stack, value);
            }
                break;

            case POP:
                Pop(stack);
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
