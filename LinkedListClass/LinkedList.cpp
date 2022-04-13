#include "LinkedList.h"

LinkedList::LinkedList() : mValue { 0 }, mpNext{ nullptr }
{
}

LinkedList::~LinkedList()
{
}

int LinkedList::GetValue()
{
	return mValue;
}

LinkedList* LinkedList::GetNextPointer()
{
	return mpNext;
}

void LinkedList::SetValue(int value)
{
	mValue = value;
}

void LinkedList::SetNextPointer(LinkedList* pNext)
{
	mpNext = pNext;
}
