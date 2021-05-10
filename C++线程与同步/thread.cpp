#include "stdafx.h"
#include <iostream>
#include <thread>

using namespace std;

int g_nData = 0;
void foo(){
    for (int i = 0; i < 100000; i++){
        g_nData++;
    }
}

int _tmain( int argc, _TCHAR* argc[])
{
    std::thread t(f00);
    for (int i = 0 ; i < 100000; i++){
        g_nData++;
    }
    t.join();
    std::cout << g_nData << std::endl;
    return 0;
}