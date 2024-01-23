#include "sing.h"

int main(int argc, char **argv)
{
    std::cout << "get value: " << Sing::Instance().val << '\n';
    
    Sing *sing2 = new Sing(Sing::Instance());
}
