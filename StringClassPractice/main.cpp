#include <iostream>
#include "String.h"

int main()
{
	String empty;
	
	String sized(10);
	sized = "abcdefghij";
	std::cout << sized << std::endl;
	
	String s1{"Hello"};
	std::cout << s1 << std::endl;

	std::cout << s1[0] << s1[1] << std::endl;

	s1[0] = 'C';
	std::cout << s1 << std::endl;

	String s2{ s1 };
	std::cout << s2 << std::endl;

	String s3{ "World" };
	s3 = s1;
	std::cout << s3 << std::endl;

	empty = s3;
	std::cout << empty << std::endl;

	String s4{ "Hello" }, s5{ "World" };
	String s6 = s4 + s5;
	std::cout << s6 << std::endl;

	s4 += s5;
	std::cout << s4 << std::endl;

	String temp;
	temp = temp;
}