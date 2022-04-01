#include <iostream>
#include <string>
#pragma once

class MyString
{
private:
	 const char* mString;
	// 문자열 복사

public:
	MyString(const char* string) : mString{ string }
	{
		// string 문자열의 길이 만큼 동적할당
		mString = new const char[strlen(string)+1]{ };
		// 모든 문자열의 가장 뒤에는 \0

		// string에서 멤버로 복사
		strcpy_s((char*)mString, strlen(string)+1, string);
	}

	~MyString()
	{
		delete[] mString;
		mString = nullptr;
	}

public:
	void Print();
};

