#include <iostream>

void print(){}
template<class T, class...Args>
void print(T v, Args...args) {
	std::cout << v << ' ';
	print(args...);
}

int main() {
	print('*', 1, 1.2);
}