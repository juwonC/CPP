#include <iostream>
#include <vector>
#include "Student.h"

using Students = std::vector<Student>;

void AddStudent(Students& v)
{
	std::cout << "�߰��� �л��� ��ȣ, �̸�, ������ �Է��ϼ���." << std::endl
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
				std::cout << "�ߺ��� ��ȣ�Դϴ�." << std::endl;
				return;
			}
		}

		v.push_back(newStudent);
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}
}


void RemoveStudent(Students& v)
{
	std::cout << "������ �л� ��ȣ�� �Է����ּ���." << std::endl
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

		std::cout << "�ش� ��ȣ�� �л��� �������� �ʽ��ϴ�." << std::endl;
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
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
		std::cout << "1. �л� �߰�" << std::endl;
		std::cout << "2. �л� ����" << std::endl;
		std::cout << "3. ��ü �л� ���" << std::endl;
		std::cout << "4. Ŭ���� ��� �� ����" << std::endl;
		std::cout << "5. Ŭ���� ��� �̻� �л� ���" << std::endl;
		std::cout << "6. ����" << std::endl;

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
				std::cout << "�߸��� ��ɾ��Դϴ�." << std::endl;
				break;
		}
	}

}