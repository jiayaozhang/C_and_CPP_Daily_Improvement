#pragma once
#include "sing_temp.h"
#include "sing1.h"
#include <iostream>

class Sing2 : public SingTemp<Sing2>
{
    friend SingTemp<Sing2>;
    
private:
    Sing2()
        : SingTemp<Sing2>()
    {
        std::cout << "Sing2 construct\n";
        val = singleton1.val + 1;
    }
    
    ~Sing2()
    {
        std::cout << "Sing2 destroy\n";
    }
    
public:
    int val;
};

static Sing2::Init sing2Init;
static Sing2& singleton2 = *Sing2::Ptr();