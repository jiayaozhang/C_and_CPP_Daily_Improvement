#pragma once
#include <iostream>

class Sing
{
public:
    static const Sing* Instance()
    {
        static Sing inst;
        return &inst;
    }
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

extern const Sing* singletonInst;