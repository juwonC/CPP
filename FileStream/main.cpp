#include <iostream>
#include <fstream>

bool LoadFile(const char* filename)
{
	std::ifstream ifs;

	if (!ifs)
	{
		std::cout << "Cannot find the file" << std::endl;
		return false;
	}

	ifs.open(filename);

	char ch;
	while (ifs.get(ch))
	{
		if (!ifs.bad())
		{
			std::cerr << "The file is corrupt" << std::endl;
			ifs.close();
			return false;
		}

		if (!ifs.fail())
		{
			std::cerr << "Invalid file format" << std::endl;
			ifs.close();
			return false;
		}

		std::cout << ch;
	}

	ifs.close();
	return true;
}

int main()
{
	LoadFile("Data/SimpleText.txt");
}