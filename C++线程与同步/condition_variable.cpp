#include<iostream>
#include<thread>
#include<mutex>
#include<atomic>
#include<deque>
#include <condition_variable>
std::mutex mtx;
std::deque<int> q;
std::condition_variable cv;
//Producer
void task1()
{
    int i = 0;
    while (true)
    {
        std::unique_lock<std::mutex> lock(mtx);
        q.push_back(i);
        cv.notify_one();
        if(i < 99999999)
        {
            i++;
        }
        else{
            i = 0;
        }
    }
}
//Consumer
void task2()
{
    int data = 0;
    while (true)
    {
        std::unique_lock<std::mutex> lock(mtx);
        if (q.empty())
        {
            cv.wait(lock);
        }

        if(!q.empty())
        {
            data = q.front();
            q.pop_front();
            std::cout << "Get Value from que:" << data << std::endl;
        }
    }
}

void task3()
{
    int data = 0;
    while (true)
    {
        std::unique_lock<std::mutex> lock(mtx);
        if (q.empty())
        {
            cv.wait(lock);
        }

        if(!q.empty())
        {
            data = q.front();
            q.pop_front();
            std::cout << "Get Value from que:" << data << std::endl;
        }
    }
}




int main()
{
    std::thread t1(task1);
    std::thread t2(task2);
    std::thread t3(task3);

    t1.join();
    t2.join();
    t3.join();
} 