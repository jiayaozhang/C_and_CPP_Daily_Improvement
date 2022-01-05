#include <iostream>
#include <string>
#include <thread>
#include <cstdio>

void f(int i, const std::string &s)
{
    std::cout << "i: " << i << ' '
              << "s: " << s << '\n';
}

void oops(int some_param)
{
    char buffer[1024];
    std::sprintf(buffer, "%i", some_param);
    std::thread t(f, some_param, buffer);
    t.detach();
}

void not_oops(int some_param)
{
    char buffer[1024];
    std::sprintf(buffer, "%i", some_param);
    std::thread t(f, some_param, std::string(buffer));
    t.detach();
}

int main()
{
    not_oops(20);
    oops(10);
    int a;
    std::cin >> a;
    return 0;
}