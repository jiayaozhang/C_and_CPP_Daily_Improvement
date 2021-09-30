#include "stdafx.h"
#include <memory>

/*
  强弱指针计数的用途
     shared_ptr:     对外提供接口，并无成员变量， 表示强指针
     父类： _Ptr_base

     weak_ptr:       对外提供接口，并无成员变量，表示弱指针
     父类： _Ptr_base

 _Ptr_base{两个成员变量 ：  _Ty * _Ptr;  表示智能指针关联的原始指针，内部指针}
 _Ref_count_base * _Rep{

     virtual void _Destroy() _NOEXCEPT = 0;
     virtual void _Delete_this() _NOEXCEPT = 0;
     
     _Atomic_counter_t _Uses;  //强指针使用次数，当前有多少强指针在使用内部指针
     _Atomic_counter_t _Weaks; //弱指针使用次数，当前有多少弱指针使用次数

 } 
 
 //基类 纯虚数 

_Ref_count:
            真正的计数器，使用时,需要把指针强转为父类指针，仅仅使用接口
            _Ref_count_base
            {
                _Ty * _Ptr;  //表达的是内部指针
            }


为什么有强弱指针
A{
  B对象智能指针 （引用次数 1）  需要lock函数提升 
weak_ptr_uses_count
}
B{
 A 对象智能指针 （引用次数 2）  
shared_ptr_uses_count
}
*/



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
