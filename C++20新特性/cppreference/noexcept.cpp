#include<map>
#include<string>
#include<deque>
#include <Windows.h>
#include<thread>
#include<vector>
#include <new>
#include<thread>
#include <array>
#include <algorithm>
#include <cstddef>
#include <iostream>
using namespace std;
//cpp11noexcept
//ËµÃ÷·û
//ÔËËã·û

void f2();

void f()noexcept(noexcept(f2()))
{
	std::cout << "hello\n";
}

void f2(){
	std::cout << "hello\n";
}

int main()
{
	std::cout << std::boolalpha << noexcept(f()) << '\n';
	std::cout << std::boolalpha << noexcept(f2()) << '\n';
	auto p = f;
	p();
}
