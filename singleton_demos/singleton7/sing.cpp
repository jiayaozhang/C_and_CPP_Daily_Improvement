#include "sing.h"
#include <memory>
#include <iostream>

Sing* singletonInst;

Sing::Init::Init()
{
    auto& count = Sing::Init::RefCount();
    auto ori = count.fetch_add(1);
    if (ori == 0)
    {
        singletonInst = new Sing();
    }
}

Sing::Init::~Init()
{
    auto& count = Sing::Init::RefCount();
    auto ori = count.fetch_sub(1);
    if (ori == 1)
    {
        delete singletonInst;
        singletonInst = nullptr;
    }
}