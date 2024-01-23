#include "sing.h"
static Sing::Init init;
static Sing& singletonInst = Sing::Instance();

auto singletonInst2 = singletonInst.val;

int main(int argc, char **argv)
{
    std::cout << "get value: " << singletonInst2 << '\n';
    std::cout << Sing::Instance().val << std::endl;
}
