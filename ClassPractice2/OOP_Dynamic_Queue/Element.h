#pragma once

class Element
{
private:
	int mValue;
	Element* mpNext;

public:
	int GetValue();
	Element* GetNextPointer();
	void SetValue(int value);
	void SetNextPointer(Element* pNext);
};

