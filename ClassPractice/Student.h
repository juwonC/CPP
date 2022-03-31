#include <string>
#pragma once

const int NAME_SIZE = 15;

class Student
{
	char mName[NAME_SIZE];
	int mNumber;
	int mScore;

public:
	Student()
	{
	}

	Student(const char name[], int number, int score)
	{
		strcpy_s(mName, NAME_SIZE, name);
		mNumber = number;
		mScore = score;
	}


	void SetStudent(const char name[NAME_SIZE], int number, int score);
	char* GetName();
	int GetScore();
	int GetNumber();
};

