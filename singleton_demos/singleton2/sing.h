#pragma once
#include <iostream>

class Sing
{
public:
    static const Sing& Instance()
    {
        static Sing inst;
        return inst;
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
    
public:
    int val;
};
