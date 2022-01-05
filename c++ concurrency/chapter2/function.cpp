#include <iostream>
#include <thread>

void function()
{
    std::cout << "function\n";
}

int main()
{
    std::thread t{function};
    t.join();
    return 0;
}