#include "MyString.h"

MyString::MyString(const char* string) : mString{ string }
{
	// string ���ڿ��� ���� ��ŭ �����Ҵ�
	mString = new const char[strlen(string) + 1]{ };
	// ��� ���ڿ��� ���� �ڿ��� \0

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
