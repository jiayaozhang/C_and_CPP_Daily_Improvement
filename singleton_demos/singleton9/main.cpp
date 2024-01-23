#include "sing2.h"
#include "sing1.h"

void fun();
int main(int argc, char **argv)
{
    std::cout << "from main: " << singleton1.val << '\n';
    std::cout << "from main: " << singleton2.val << '\n';
    fun();
    
/*    size_t res = 0;
    for (unsigned i = 0; i < 999999999; ++i)
    {
        res += singleton1.val + i;
    }
    return res;*/
}
