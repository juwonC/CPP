#include <iostream>
#include "ClassRoom.h"

void ClassRoom::PrintStudentList(Student* s[], int size)
{
	
	for (int i = 0; i < size; ++i)
	{
		std::cout << s[i]->mName << std::endl;
	}
}

//void ClassRoom::GetTotalScore(Student s[], int size)
//{
//	int sum{};
//	
//	for (int i = 0; i < size; ++i)
//	{
//		sum = sum + s[i];
//		std::cout << sum << std::endl;
//	}
//}
