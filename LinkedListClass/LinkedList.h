#include<iostream>
#pragma once

class LinkedList
{
protected:
	int mValue;
	LinkedList* mpNext;

public:
	LinkedList();
	virtual ~LinkedList();

public:
	int GetValue();
	LinkedList* GetNextPointer();
	void SetValue(int value);
	void SetNextPointer(LinkedList* pNext);
	virtual void PrintInfo() const {};
	virtual void PrintList() const {};
};