#pragma once
#include "Student.h"

const int STUDENT_NUMBER{ 10 };

class ClassRoom
{
	int mGrade;
	int mRoomNumber;
	Student mStudents[STUDENT_NUMBER];

public:

	void SetClassRoomInfo(int grade, int roomNumber, Student* mStudents);
	void PrintStudentList();
	void GetTotalScore();
};

