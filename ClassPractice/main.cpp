#include <iostream>
#include "Point2D.h"
#include "ClassRoom.h"

int main()
{
	Point2D p1;

	p1.SetCoordinate(3, 4);
	std::cout << p1.GetDistancefromStartingPoint(3, 4) << std::endl;
	p1.PrintCoordinate();

	
	ClassRoom c1;
	Student s1[STUDENT_NUMBER]{};

	s1[0].SetStudent("Tom", 1, 30);
	s1[1].SetStudent("Lee", 2, 50);
	s1[2].SetStudent("Kim", 3, 70);
	s1[3].SetStudent("Jane", 4, 20);
	s1[4].SetStudent("Cho", 5, 15);
	s1[5].SetStudent("Park", 6, 18);
	s1[6].SetStudent("Choi", 7, 90);
	s1[7].SetStudent("Jay", 8, 95);
	s1[8].SetStudent("Bob", 9, 85);
	s1[9].SetStudent("Joy", 10, 80);
	
	c1.PrintStudentList(s1, STUDENT_NUMBER);
}