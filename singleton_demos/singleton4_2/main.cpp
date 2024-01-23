#include "sing.h"

auto singletonInst2 = singletonInst;

int main(int argc, char **argv)
{
    std::cout << "singletonInst: " << singletonInst << '\n';
    std::cout << "singletonInst2: " << singletonInst2 << '\n';
}
