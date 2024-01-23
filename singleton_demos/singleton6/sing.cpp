#include "sing.h"
#include <memory>
#include <iostream>

static unsigned singletonCount;
Sing* singletonInst;

Sing::Init::Init()
{
    ++singletonCount;
    if (singletonCount == 1)
    {
        singletonInst = new Sing();
    }
}

Sing::Init::~Init()
{
    --singletonCount;
    if (singletonCount == 0)
    {
        delete singletonInst;
        singletonInst = nullptr;
    }
}