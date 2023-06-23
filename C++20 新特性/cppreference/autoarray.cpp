#include "iostream"

int main()
{
	const int n = 10;
	int array[n];
	for(auto& i:array)
	{
		i = 6;
	}

	for (const auto& i : array)
	{
		std::cout << i << std::endl;
	}
}