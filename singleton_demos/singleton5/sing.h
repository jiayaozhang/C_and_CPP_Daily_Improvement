#pragma once
#include <iostream>
#include <memory>

class Sing
{
public:
    struct Init
    {
        Init();
        Init(const Init&) = delete;
        Init& operator= (const Init&) = delete;
    };
    
public:
    ~Sing()
    {
        std::cout << "Sing destroy\n";
    }

private:
    Sing()
    {
        std::cout << "Sing construct\n";
        val = 100;
    }

    Sing(const Sing&) = delete;
    Sing& operator= (const Sing&) = delete;
public:
    int val;
};

extern std::unique_ptr<Sing> singletonInst;