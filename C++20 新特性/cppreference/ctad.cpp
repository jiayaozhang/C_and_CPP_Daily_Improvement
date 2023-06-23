#include<iostream>
#include <vector>
//#include <array>
template<typename T>
struct Test
{
	Test(T){}
	T s;
};
//
//template<typename T>
//Test(T) -> Test<double>;

Test(const char*) -> Test<std::string>;

template<typename T, size_t size>
struct array {
	T arr[size];
};

template<class Tu, class... Tp>
array(Tu, Tp...) -> array<std::enable_if_t<(std::is_same_v<Tu, Tp>&& ...), Tu>, sizeof...(Tp)+1>;

int main()
{
	Test t(6);
	Test t2(6.6);
	array arr{ 1,2,3,4 };
	std::vector V{1, 2, 3};
	//std::array arr{1, 2, 3};
	std::is_same_v<int, int>;
}