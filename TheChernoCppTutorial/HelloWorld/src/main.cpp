#define REMO stupido 
#define INTEGER int

#include <iostream>
#define LOG(x) std::cout << x << std::endl
void Log();

void MultiplyAndLog(int a, int b)
{
	int result = a * b;
	std::cout << result << std::endl;
}

void Incremental(int* value)
{
	(*value)++;
}

int main() {

	MultiplyAndLog(4,5);
	int x = 5;
	std::cout << "Hello World!" << std::endl;
    bool ComparisionResult = x == 5;
	Incremental(&x);
	if (ComparisionResult)
	{
		Log();
		LOG(x);
	}
   //std::cin.get(); 
    
}

