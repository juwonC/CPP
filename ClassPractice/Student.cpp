#include <string>
#include "Student.h"

void Student::SetStudent(const char name[NAME_SIZE], int number, int score)
{
	strcpy_s(mName, NAME_SIZE, name);
	mNumber = number;
	mScore = score;
}

const char Student::GetName(const char name[NAME_SIZE])
{
	return strcpy_s(mName, NAME_SIZE, name);
}

int Student::GetNumber(int number)
{
	return mNumber;
}

int Student::GetScore(int score)
{
	return mScore;
}

