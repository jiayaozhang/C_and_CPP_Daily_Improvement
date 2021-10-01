declared without initial value

must be initialized using constructor initializer list

class X{
public:

        int& m_y;
        X(int& a);
       };

X::X(int& a) : m_y(a) {}
