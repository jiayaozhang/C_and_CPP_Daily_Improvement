#include <iostream>
#include <thread>

int main()
{
    std::thread t{[]()
    {
        std::cout << "lambda\n";
    }};
    t.join();
    return 0;
}