// LIFETIME OF A VARIABLE is about how much that variable will remain in memory before it gets deleted
// SCOPE OF A VARIABLE refers to where we can actually access that variable: if we declare the variable inside a function, that variable will be available available only in that function, for that function and not for others.

// STATIC LOCAL VARIABLE allows us to declare a variable that has a lifetime of the entire program but its scope is always inside that function (if declared inside a function). So STATIC makes only the lifetime of that variable infinite to the program but doesn't change the scope of that variable.

// #include <iostream>

// void FunctionS()
// { // The first time I call this function, the v ariable i is initialized to 0 and then incremented to 1. The next time I call this function, the variable i is not initialized but it start from the previuos value. Its lifetime is infinite to the program
//    static int i = 0;
//    i++;
//    std::cout << i << std::endl;
// }

// void Function()
// { // Every time I call this function, the variable i is initialized to 0 and then incremented to 1
//    int i = 0;
//    i++;
//    std::cout << i << std::endl;
// }
// int main() {
//    Function();
//    Function();
//    Function();
//    Function();
//        std::cout << "--------------" << std::endl;
//    FunctionS();
//    FunctionS();
//    FunctionS();
//    FunctionS();
//    std::cin.get();
// }


//Ex 2: Other way to do it
#include <iostream>
class Singleton // It is a class that should have only one instance in existence
{
private:
    static Singleton* s_Instance;
public:
    static Singleton& Get()
    {
        return *s_Instance;
    }
    
    void Hello(){}
};

Singleton* Singleton::s_Instance = nullptr;

int main() {
    
    Singleton::Get().Hello();
    std::cin.get();
    
}

//Ex 3: Other way to do it

// #include <iostream>
// class Singleton // It is a class that should have only one instance in existence
// {
// public:
//      static Singleton& Get()
//      {
//         static Singleton instance;
//         // if we didn't have this static, the Singleton instance will be destroyed as soon as you exit the brackets
//         return instance;
//       }
//     void Hello(){}
// };

// Singleton* Singleton::s_Instance = nullptr;

// int main() {
    
//     Singleton::Get().Hello();
//     std::cin.get();
    
// }

