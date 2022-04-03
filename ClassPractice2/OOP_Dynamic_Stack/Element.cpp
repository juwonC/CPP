#include "Element.h"

int Element::GetValue()
{
    return mValue;
}

Element* Element::GetNextPointer()
{
    return mpNext;
}

void Element::SetValue(int value)
{
    mValue = value;
}

void Element::SetNextPointer(Element* pNext)
{
    mpNext = pNext;
}
