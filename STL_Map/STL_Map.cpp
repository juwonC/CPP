#include <iostream>
#include <map>

class Student
{
public:
    std::string mName;
    int mScore;

    void Print() const
    {
        std::cout << mName << " : " << mScore << std::endl;
    }
};

using Students = std::map<int, Student>;

void AddStudent(Students& v)
{
    std::cout << "번호 이름 점수 : ";
    Student newStudent;
    int number;

    if (std::cin >> number >> newStudent.mName >> newStudent.mScore)
    {
        std::pair<std::map<int, Student>::iterator, bool> result = v.insert({ number, newStudent });

        if (result.second == false)
        {
            std::cout << "중복된 학생 번호입니다." << std::endl;
        }
    }
    else
    {
        std::cout << "잘못된 입력입니다." << std::endl;
    }
}

void RemoveStudent(Students& v)
{
    std::cout << "지울 학생 번호 : ";
    int number;

    if (std::cin >> number)
    {
        if (v.erase(number) == 0)
        {
            std::cout << "존재하지 않는 번호입니다." << std::endl;
        }
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
        std::cout << "(" << e.first << ")" << " ";
        e.second.Print();
    }
}

void PrintScoreInfo(const Students& v)
{
    int total{};
    for (const auto& e : v)
    {
        total += e.second.mScore;
    }

    std::cout << "Total : " << total
        << ", Average : " << static_cast<float>(total) / v.size() << std::endl;
}

void PrintOverAverage(const Students& v)
{
    float average{};
    for (const auto& e : v)
    {
        average += e.second.mScore;
    }
    average /= v.size();


    for (const auto& e : v)
    {
        if (e.second.mScore >= average)
        {
            std::cout << "(" << e.first << ")";
            e.second.Print();
        }
    }
}

int main()
{
    Students students{
        { 1, {"Kim", 80} },
        { 2, {"Lee", 60} },
        { 3, {"Park", 90} },
        { 4, {"Choi", 70} },
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