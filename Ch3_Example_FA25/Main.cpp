#include <iostream>

int main()
{
	int x = 2147483647;

	std::cout << "x = " << x << std::endl;
	x = x + 1;
	std::cout << "x = " << x << std::endl;

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

	return 0;
}