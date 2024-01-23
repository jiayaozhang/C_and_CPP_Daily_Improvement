#include "sing.h"
auto singletonInst2 = singletonInst.val;

int main(int argc, char **argv)
{
    std::cout << "get value: " << singletonInst2 << '\n';
    std::cout << singletonInst.val << std::endl;
}
