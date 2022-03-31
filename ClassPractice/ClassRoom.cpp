#include <iostream>
#include "ClassRoom.h"

void ClassRoom::SetClassRoomInfo(int grade, int roomNumber, Student* students)
{
	mGrade = grade;
	mRoomNumber = roomNumber;
	for (int i = 0; i < STUDENT_NUMBER; ++i)
	{
		mStudents[i] = students[i];
	}
}
	

void ClassRoom::PrintStudentList()
{
	
	for (int i = 0; i < STUDENT_NUMBER; ++i)
	{
		std::cout << mStudents[i].GetName() << " " << mStudents[i].GetNumber() << " " << mStudents[i].GetScore() << std::endl;
	}
}

void ClassRoom::GetTotalScore()
{
	int sum{};
	
	for (int i = 0; i < STUDENT_NUMBER; ++i)
	{
		sum += mStudents[i].GetScore();
	}

	std::cout << sum << std::endl;
}
