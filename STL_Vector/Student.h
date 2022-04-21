#include <iostream>
#pragma once

class Student
{
private:
	int mNumber;
	std::string mName;
	int mScore;

public:
	Student();
	Student(int number, std::string name, int score);
	~Student();

public:
	int GetNumber() const;
	std::string GetName() const;
	int GetScore() const;
	void SetStudent(int number, std::string name, int score);
	void Print() const;
};

