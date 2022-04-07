#include <iostream>
#include <cstring>
#pragma once

class String
{
private:
	char* mString;
	int mLength;

public:
	String();
	String(int length);
	String(const char* string);
	String(const String& string);
	~String();

	const char* GetString() const;
	int GetLength() const;

	String operator+(const String& string);
	const String& operator=(const String& string);
	String& operator+=(const String& string);
	char& operator[](int index);

	friend std::ostream& operator<<(std::ostream& os, const String& string);
};

