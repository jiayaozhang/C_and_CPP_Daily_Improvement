#pragma once
#include <atomic>

template <typename T>
class SingTemp
{
public:
    struct Init
    {
        Init()
        {
            auto& count = RefCount();
            auto ori = count.fetch_add(1);
            if (ori == 0)
            {
                T* ptr = SingTemp::Ptr();
                new (ptr) T();
            }            
        }

        ~Init()
        {
            auto& count = RefCount();
            auto ori = count.fetch_sub(1);
            if (ori == 1)
            {
                T* ptr = SingTemp::Ptr();
                ptr->~T();
            }
        }

        static auto& RefCount()
        {
            static std::atomic<unsigned> count{0};
            return count;
        }
        
        Init(const Init&) = delete;
        Init& operator= (const Init&) = delete;
    };
    
protected:
    SingTemp() = default;
    ~SingTemp() = default;
    SingTemp(const SingTemp&) = delete;
    SingTemp& operator= (const SingTemp&) = delete;
    
public:
    static T* Ptr()
    {
        alignas(T) static char singBuf[sizeof(T)];
        return reinterpret_cast<T*>(singBuf);
    }
};
