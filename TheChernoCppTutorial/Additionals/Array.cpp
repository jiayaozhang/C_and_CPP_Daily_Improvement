#include<iostream>
#include<array>
#include<cstring>
template<typename T,size_t S>
class Array
{
public:
    constexpr size_t  Size() const { return S; }
    T& operator[](size_t index) { return m_Data[index]; }
    const T& operator[](size_t index) const { return m_Data[index]; }
    T* Data() {return m_Data;}
    const T* Data() const {return m_Data;}
private:
    T m_Data[S];

};


int main()
{
    constexpr int size = 5;
    Array<std::string,size> data;

    // memset(data.Data(), 0, size * sizeof(int));
    static_assert(data.Size() < 10, "Size is too large");

    data[0] = "Cherno";
    data[1] = "Hello";
    data[2] = "World";

    for(int i = 0; i < data.Size(); i++)
    {
        std::cout << data[i] << std::endl;
    }
    std::cin.get();
}