#include "sing.h"
#include <memory>
#include <iostream>

constinit std::unique_ptr<Sing> singletonInst;

Sing::Init::Init()
{
    if (!singletonInst)
    {
        singletonInst.reset(new Sing());
    }
}

