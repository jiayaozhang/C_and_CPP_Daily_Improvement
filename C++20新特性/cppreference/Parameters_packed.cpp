#include<iostream>
#include <cstdarg>

void print(int count...)
{
	va_list args{};
	va_start(args, count);
	for (int i = 0; i < count; i++)
	{
		int arg = va_arg(args, int);
		std::cout << arg << " ";
	}
	va_end(args);
}

int main() {
	print(5, 1, 2, 3, 4, 5);
	printf("%d\n", 2);
}