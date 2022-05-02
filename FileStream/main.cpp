#include <iostream>
#include <fstream>

bool LoadFile(const char* filename)
{
	std::ifstream ifs;

	if (!ifs)
	{
		std::cout << "Cannot Find the File" << std::endl;
		return false;
	}

	ifs.open(filename);

	char ch;
	while (ifs >> ch)
	{
		std::cout << ch;
	}

	ifs.close();
	return true;
}

int main()
{
	bool LoadFile("Data/SimpleText.txt");
}