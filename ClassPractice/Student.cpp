#include <string>
#include "Student.h"

void Student::SetStudent(const char name[NAME_SIZE], int number, int score)
{
	strcpy_s(mName, NAME_SIZE, name);
	mNumber = number;
	mScore = score;
}

