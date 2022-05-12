#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

class Monster
{
private:
	std::string mName;
	int mLevel;
	int mHP;
	int mMP;

public:
	Monster() : mName{ "" }, mLevel{}, mHP{}, mMP{}
	{
	}
	Monster(std::string name, int level, int hp, int mp) : mName{ name }, mLevel{ level }, mHP{ hp }, mMP{ mp }
	{
	}

public:
	void SetName(std::string name) { mName = name; }
	void SetLevel(int level) { mLevel = level; }
	void SetHP(int hp) { mHP = hp; }
	void SetMP(int mp) { mMP = mp; }

	friend std::istream& operator >> (std::istream& ifs, Monster& m);
	friend std::ostream& operator << (std::ostream& ofs, Monster& m);
};

std::istream& operator >> (std::istream& ifs, Monster& monster)
{
	std::string buffer;

	try
	{
		std::getline(ifs, buffer, ',');
		monster.mName = buffer;

		std::getline(ifs, buffer, ',');
		monster.SetLevel(std::stoi(buffer));

		std::getline(ifs, buffer, ',');
		monster.SetHP(std::stoi(buffer));

		std::getline(ifs, buffer);
		monster.SetMP(std::stoi(buffer));
	}
	catch (std::exception e)
	{
		std::cout << "Error" << e.what() << std::endl;
	}

	return ifs;
}

std::ostream& operator << (std::ostream& ofs, Monster& monster)
{
	ofs << monster.mName << ": " 
		<< monster.mLevel << ", "
		<< monster.mHP << ", "
		<< monster.mMP << std::endl;

	return ofs;
}

bool LoadFile(const std::string& filename, std::vector<Monster>& vector)
{
	std::ifstream ifs;
	ifs.exceptions(std::ifstream::badbit);

	try
	{
		ifs.open(filename);

		std::string buffer;

		std::getline(ifs, buffer);
		while (!ifs.eof())
		{
			Monster m;
			
			ifs >> m;

			vector.push_back(m);
		}
		ifs.close();
	}
	catch (std::ifstream::failure e)
	{
		std::cout << "There was an error running the file" << e.what() << std::endl;
		ifs.close();
		return false;
	}

	return true;
}

int main()
{
	std::vector<Monster> monsterList;

	LoadFile("Data/SimpleText.txt", monsterList);

	for (auto& e : monsterList)
	{
		std::cout << e << std::endl;
	}
}