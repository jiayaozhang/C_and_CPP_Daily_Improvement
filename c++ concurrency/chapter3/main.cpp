#include <iostream>
#include <thread>

void hello()
{
    std::cout << "Hello, world!\n";
}

int main(int, char**)
{
    std::thread t(hello);
    t.join();
}
