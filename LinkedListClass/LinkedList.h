#include<iostream>
#pragma once

class LinkedList
{
protected:
	int mValue;
	int mCount;
	LinkedList* mpNext;

public:
	LinkedList();
	virtual ~LinkedList();

public:
	int GetValue() const;
	LinkedList* GetNextPointer() const;
	void SetValue(int value);
	void SetNextPointer(LinkedList* pNext);
	virtual void PrintInfo() const{};
	virtual void PrintList() const{};
	virtual void ProcessUserInput() {};
};