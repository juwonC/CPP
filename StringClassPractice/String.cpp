#include "String.h"

String::String()
{
	mLength = 0;
	mString = new char[GetLength()];

	std::cout << "Empty String" << std::endl;
}

String::String(int length) : mLength{ length }
{
	mLength = length;
	mString = new char[GetLength()];

	std::cout << length << "글자 저장 가능" << std::endl;
}

String::String(const char* string)
{
	mLength = strlen(string);
	mString = new char[GetLength()];

	strcpy_s(mString, GetLength(), string);
}

String::String(const String& string)
{
	mLength = string.mLength;
	mString = new char[GetLength()];

	strcpy_s(mString, GetLength(), string.mString);
}

String::~String()
{
	delete[] mString;
	mString = nullptr;
}

const char* String::GetString() const
{
	return mString;
}

int String::GetLength() const
{
	return mLength + 1;
}

String String::operator+(const String& string)
{
	String result;
	result.mLength = strlen(mString) + strlen(string.mString);
	result.mString = new char[result.GetLength()];

	strcpy_s(result.mString, result.GetLength(), mString);
	strcat_s(result.mString, result.GetLength(), string.mString);
	
	return result.mString;
}

const String& String::operator=(const String& string)
{
	mLength = string.mLength;
	mString = new char[GetLength()];

	strcpy_s(mString, GetLength(), string.mString);

	return *this;
}

String& String::operator+=(const String& string)
{
	String result;

	result = *this + string;
	*this = result;

	return *this;
}

char& String::operator[](int index)
{
	return mString[index];
}

std::ostream& operator<<(std::ostream& os, const String& string)
{
	os << string.mString;
	return os;
}