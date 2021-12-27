#include <iostream>
#include <type_traits>

using std::cout;
using std::endl;

class Test
{
public:
    operator int() const
    {
        cout << "operator type const " << endl;
        return 1;
    }

    int operator()() const
    {
        cout << "operator()()" << endl;
        return 2;
    }
};

int main()
{
    Test t;
    int x(t);
    int xx = t;
    t();
    return 0;
}
