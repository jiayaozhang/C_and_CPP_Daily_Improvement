#include "sing.h"

int main(int argc, char **argv)
{
    std::cout << "get value: " << Sing::Instance().val << '\n';
 //   Sing* s = new Sing((Sing::Instance()));

    
    size_t res = 0;
    for (unsigned i = 0; i < 999999999; ++i)
    {
        res += Sing::Instance().val + i;
    }
    return res;
}
