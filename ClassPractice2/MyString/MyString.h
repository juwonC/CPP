#include <iostream>
#include <string>
#pragma once

class MyString
{
private:
	 const char* mString;
	// ���ڿ� ����

public:
	MyString(const char* string) : mString{ string }
	{
		// string ���ڿ��� ���� ��ŭ �����Ҵ�
		mString = new const char[strlen(string)+1]{ };
		// ��� ���ڿ��� ���� �ڿ��� \0

		// string���� ����� ����
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

