#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int awesomeFunction()
{
	return 42;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	// Demonstrating integer overflow
	int x = 2147483647;

	std::cout << "x = " << x << std::endl;
	x = x + 1;
	std::cout << "x = " << x << std::endl;

	// Demonstrating floating point precision issues
	float y = 0.1f;

	y = y + 0.1f;
	y = y + 0.1f;
	y = y + 0.1f;
	y = y + 0.1f;
	y = y + 0.1f;
	y = y + 0.1f;
	y = y + 0.1f;
	y = y + 0.1f;
	y = y + 0.1f;

	std::cout << "y = " << y << std::endl;

	if(y == 1)
	{
		std::cout << "y is equal to 1" << std::endl;
	}
	else
	{
		std::cout << "y is NOT equal to 1" << std::endl;
	}

	std::cout << "integer division of 5 / 2: " << 5 / 2 << std::endl;
	std::cout << "modulus of 5 % 2: " << 5 % 2 << std::endl;
	std::cout << "floating point division of 5.0 / 2.0: " << 5.0 / 2.0 << std::endl;
	std::cout << "mixed division of 5 / 2.0: " << 5 / 2.0 << std::endl;

	std::cout << "awesomeFunction() returns: " << awesomeFunction() << std::endl;

	int a = 1;
	int b = 2;
	int c = 3;

	std::cout << "sum(a, b, c) = " << sum(a, b, c) << std::endl;

	// Demonstrating use of math library
	double angle = 3.14159265358979 / 4; // radians
	std::cout << "sin(angle) = " << std::sin(angle) << std::endl;

	float value = 12.34567f;
	std::cout << std::setprecision(4) << "The cost of the item is $" << value << std::endl;
	std::cout << "The cost of the item is $" << std::setw(10) << value << std::endl;
	std::cout << "The cost of the item is $" << value << std::endl;

	std::string str = "Hello, World!";
	std::cout << str << std::endl;
	std::cout << "Length of str: " << str.length() << std::endl;
	std::cout << "First character of str: " << str.at(0) << std::endl;
	std::cout << "Substring of str (6, 5): " << str.substr(6, 5) << std::endl;
	std::cout << str.substr(6, 5) + " everyone!" << std::endl;

	return 0;
}