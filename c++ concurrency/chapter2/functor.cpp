#include <iostream>
#include <thread>

struct functor
{
    void operator()()
    {
        std::cout << "functor\n";
    }
};

functor f;



int main()
{
    // std::thread t1{functor()};
    // std::thread t2(functor{});
    // std::thread t3{functor{}};
    // std::thread t4((functor()));
    // t1.join();

    std::thread my_thread(f);
    my_thread.join();
    return 0;
}