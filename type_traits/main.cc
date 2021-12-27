#include <iostream>
#include <type_traits>

using std::cout;
using std::endl;

template <class T>
auto func(T t) -> std::enable_if_t<std::is_same<int, std::remove_cv_t<T>>::value, int>
{
    cout << "int" << endl;
}

template <class T>
auto func(T t) -> std::enable_if_t<std::is_same<double, std::remove_cv_t<T>>::value, double>
{
    cout << "double" << endl;
}

int main()
{
    int a = 1;
    double b = 2.9;
    func(a);
    func(b);

    // float c = 34.5;
    // func(c);

    return 0;
}
