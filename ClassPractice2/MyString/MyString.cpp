#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(const char* string) : mString{string}
{
	// string ���ڿ��� ���� ��ŭ �����Ҵ�
	// ��� ���ڿ��� ���� �ڿ��� \0
	mString = new char[strlen(string) + 1]{ };

	// string���� ����� ����
	strcpy_s((char*)mString, strlen(string) + 1, string);
}

MyString::~MyString()
{
	delete[] mString;
	mString = nullptr;
}

void MyString::Print()
{
	std::cout << mString << std::endl;
}