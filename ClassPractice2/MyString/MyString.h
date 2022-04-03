#pragma once

class MyString
{
private:
	 const char* mString;

public:
	MyString(const char* string);
	~MyString();

public:
	void Print();
};