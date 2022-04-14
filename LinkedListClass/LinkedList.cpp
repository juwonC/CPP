#include "LinkedList.h"

LinkedList::LinkedList() : mValue{ 0 }, mCount{ 0 }, mpNext{ nullptr }
{
}

LinkedList::~LinkedList()
{
}

int LinkedList::GetValue() const
{
	return mValue;
}

LinkedList* LinkedList::GetNextPointer() const
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
