#include "Student.h"

Student::Student()
{
}

Student::Student(int number, std::string name, int score) : mNumber{ 0 }, mName{ " " }, mScore{ 0 }
{
	mNumber = number;
	mName = name;
	mScore = score;
}

Student::~Student()
{

}

int Student::GetNumber() const
{
	return mNumber;
}

std::string Student::GetName() const
{
	return mName;
}

int Student::GetScore() const
{
	return mScore;
}

void Student::SetStudent(int number, std::string name, int score)
{
	mNumber = number;
	mName = name;
	mScore = score;
}

void Student::Print() const
{
	std::cout << "(" << mNumber << ")" << " " << mName << " : " << mScore << std::endl;
}
