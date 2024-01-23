#include "sing.h"
#include <memory>
#include <iostream>

alignas(Sing) char singBuf[sizeof(Sing)];

Sing::Init::Init()
{
    auto& count = RefCount();
    auto ori = count.fetch_add(1);
    if (ori == 0)
    {
        Sing* ptr = reinterpret_cast<Sing*>(singBuf);
        new (ptr) Sing();
    }
}

Sing::Init::~Init()
{
    auto& count = RefCount();
    auto ori = count.fetch_sub(1);
    if (ori == 1)
    {
        Sing* ptr = reinterpret_cast<Sing*>(singBuf);
        ptr->~Sing();
    }
}
