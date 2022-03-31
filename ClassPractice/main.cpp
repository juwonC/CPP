#include <iostream>
#include "Point2D.h"
#include "ClassRoom.h"

int main()
{
	Point2D p1;

	p1.SetCoordinate(3, 4);
	std::cout << p1.GetDistancefromStartingPoint() << std::endl;
	p1.PrintCoordinate();

	
	ClassRoom c1;
	Student students[STUDENT_NUMBER]{
		{"Tom", 1, 30},
		{"Lee", 2, 50},
		{"Kim", 3, 70},
		{"Jane", 4, 20},
		{"Cho", 5, 15},
		{"Park", 6, 18},
		{"Choi", 7, 90},
		{"Jay", 8, 95},
		{"Bob", 9, 85},
		{"Joy", 10, 80},
	};
	
	c1.SetClassRoomInfo(1, 1, students);
	c1.PrintStudentList();
	c1.GetTotalScore();
}

// 생성자를 명시적으로 하나라도 만들어주면 기본 생성자를 만들어야한다!