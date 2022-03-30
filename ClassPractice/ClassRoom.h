#pragma once
#include "Student.h"

const int STUDENT_NUMBER = 10;

class ClassRoom : Student
{
	int mGrade;
	int mRoomNumber;
	Student s[STUDENT_NUMBER];

	//ClassRoom(int grade, int roomNumber, Student s[STUDENT_NUMBER])
	//{
	//	mGrade = grade;
	//	mRoomNumber = roomNumber;
	//	s[STUDENT_NUMBER] = ;
	//}

public:
	void PrintStudentList(Student* s[], int size);
	// void GetTotalScore(Student s[], int size);
};

