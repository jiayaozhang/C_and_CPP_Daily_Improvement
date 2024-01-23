#include "sing.h"
#include <memory>
#include <iostream>

MyUniquePtr<Sing> singletonInst;

Sing::Init::Init()
{
    if (!singletonInst)
    {
        singletonInst.reset(new Sing());
    }
}

static Sing::Init init;