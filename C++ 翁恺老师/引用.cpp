#include "stdafx.h"
#include <memory>

// 为什么有强弱指针
// A{
//   B对象智能指针 （引用次数 1）  需要lock函数提升 
// weak_ptr_uses_count
// }
// B{
//  A 对象智能指针 （引用次数 2）  
// shared_ptr_uses_count
//}

int _tmain( int argc, _TCHAR* argv[])
{
    std::shared_ptr<int> sptr(new int(3));
    std::shared_ptr<int> sptr2 = sptr2;
    std::weak_ptr<int> wptr = sptr;

    if(!wptr.expired()){
        std::shared_ptr<int> sptr3 = wptr.lock();
    }

    return 0;
}