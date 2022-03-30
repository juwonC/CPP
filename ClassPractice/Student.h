#include <string>
#pragma once

const int NAME_SIZE = 15;

class Student
{
	char mName[NAME_SIZE];
	int mNumber;
	int mScore;

	//Student(char name[], int number, int score)
	//{
	//	strcpy(mName, name);
	//	mNumber = number;
	//	mScore = score;
	//}

public:
	void SetStudent(const char name[NAME_SIZE], int number, int score);
	const char GetName(const char name[NAME_SIZE]);
	int GetNumber(int number);
	int GetScore(int score);
};

