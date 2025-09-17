#include <iostream>

int awesomeFunction()
{
	return 42;
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

	return 0;
}