#pragma once
#include <iostream>

class Sing
{
public:
    Sing()
    {
        std::cout << "Sing construct\n";
        val = 100;
    }
    ~Sing()
    {
        std::cout << "Sing destroy\n";
    }
    
    int val;
};

extern Sing singletonInst;