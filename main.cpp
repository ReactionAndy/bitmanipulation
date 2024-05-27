#include <iostream>

int main()
{
	long i;
	i = 10;
	std::cout << i << std::endl;
	i = (i << 1);
	std::cout << i << std::endl;
	i = (i >> 1);
	i = (i >> 1);
	std::cout << i << std::endl;

	return 0;
}