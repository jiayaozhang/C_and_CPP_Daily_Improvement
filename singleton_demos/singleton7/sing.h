#pragma once
#include <atomic>
#include <iostream>

class Sing
{
public:
    struct Init
    {
        Init();
        Init(const Init&) = delete;
        Init& operator= (const Init&) = delete;
        ~Init();
        
        static std::atomic<unsigned>& RefCount()
        {
            static std::atomic<unsigned> singletonCount{0};
            return singletonCount;
        }
    };
    
private:
    Sing()
    {
        std::cout << "Sing construct\n";
        val = 100;
    }

    ~Sing()
    {
        std::cout << "Sing destroy\n";
    }

    Sing(const Sing&) = delete;
    Sing& operator= (const Sing&) = delete;
public:
    int val;
};

extern Sing* singletonInst;