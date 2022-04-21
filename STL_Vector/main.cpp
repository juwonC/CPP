#include <iostream>
#include <vector>
#include "Student.h"

using Students = std::vector<Student>;

void AddStudent(Students& v)
{
	std::cout << "추가할 학생의 번호, 이름, 점수를 입력하세요." << std::endl
		<< "> ";

	Student newStudent;
	int number, score;
	std::string name;
	
	if (std::cin >> number >> name >> score)
	{
		newStudent.SetStudent(number, name, score);

		for (auto e : v)
		{
			if (e.GetNumber() == newStudent.GetNumber())
			{
				std::cout << "중복된 번호입니다." << std::endl;
				return;
			}
		}

		v.push_back(newStudent);
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}
}


void RemoveStudent(Students& v)
{
	std::cout << "삭제할 학생 번호를 입력해주세요." << std::endl
			  << "> ";

	int number;
	if (std::cin >> number)
	{
		for (auto itr = v.begin(); itr != v.end(); ++itr)
		{
			if (itr->GetNumber() == number)
			{
				v.erase(itr);
				return;
			}
		}

		std::cout << "해당 번호의 학생이 존재하지 않습니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}
	
}

void PrintStudents(const Students& v)
{
	for (const auto& e : v)
	{
		e.Print();
	}
}

void PrintScoreInfo(const Students& v)
{
	int total{};
	for (const auto& e : v)
	{
		total += e.GetScore();
	}

	std::cout << "Total : " << total
			  << ", Average : " << static_cast<float>(total) / v.size() << std::endl;
}

void PrintOverAverage(const Students& v)
{
	float average{};
	for (const auto& e : v)
	{
		average += e.GetScore();
	}
	average /= v.size();

	for (const auto& e : v)
	{
		if (e.GetScore() >= average)
		{
			e.Print();
		}
	}
}

int main()
{
	Students students{
		Student::Student(1, "Kim", 70),
		Student::Student(2, "Lee", 80),
		Student::Student(3, "Park", 50),
		Student::Student(4, "Choi", 60),
	};

	int command{};

	while (command != 6)
	{
		std::cout << "1. 학생 추가" << std::endl;
		std::cout << "2. 학생 제거" << std::endl;
		std::cout << "3. 전체 학생 출력" << std::endl;
		std::cout << "4. 클래스 평균 및 총점" << std::endl;
		std::cout << "5. 클래스 평균 이상 학생 목록" << std::endl;
		std::cout << "6. 종료" << std::endl;

		std::cout << "> ";
		std::cin >> command;
		switch (command)
		{
			case 1:
				AddStudent(students);
				break;

			case 2:
				RemoveStudent(students);
				break;

			case 3:
				PrintStudents(students);
				break;

			case 4:
				PrintScoreInfo(students);
				break;

			case 5:
				PrintOverAverage(students);
				break;

			case 6:
				break;

			default:
				std::cout << "잘못된 명령어입니다." << std::endl;
				break;
		}
	}

}