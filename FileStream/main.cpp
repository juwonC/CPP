#include <iostream>
#include <fstream>

bool LoadFile(const char* filename)
{
	std::ifstream ifs;
	ifs.exceptions(std::ifstream::badbit | std::ifstream::failbit);

	try
	{
		ifs.open(filename);

		char ch;
		while (ifs.get(ch))
		{
			std::cout << ch;
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
	LoadFile("Data/SimpleText.txt");
}