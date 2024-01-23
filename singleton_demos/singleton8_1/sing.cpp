#include "sing.h"
#include <memory>
#include <iostream>

Sing* Sing::singletonPtr;

Sing::Init::Init()
{
    auto& count = RefCount();
    auto ori = count.fetch_add(1);
    if (ori == 0)
    {
        singletonPtr = new Sing();
    }
}

Sing::Init::~Init()
{
    auto& count = RefCount();
    auto ori = count.fetch_sub(1);
    if (ori == 1)
    {
        delete singletonPtr;
        singletonPtr = nullptr;
    }
}