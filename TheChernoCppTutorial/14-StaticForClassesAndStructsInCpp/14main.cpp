// #include <iostream>
// //// STATIC in a CLASS or STRUCT
// //// I do an example with Struct but this apply as well to classes
// struct Entity{
//    int x, y;
//    static int sx, sy;
//    void Print()
//    {
//        std:: cout << x << ", " << y << std::endl;
//    }
//    void Prints()
//    {
//        std:: cout << sx << ", " << sy << std::endl;
//    }
// };
// int Entity::sx; // I need to define those static variables
// int Entity::sy; // Here I'm telling that sx and sy are static variables inside the scope Entity

// int main() {
//    Entity e;
//    e.x = 2;
//    e.y = 3;
//    e.sx = 2;
//    e.sy = 3;

//    Entity e1;
//    e1.x = 5;
//    e1.y = 8;
//    // I can also initialize e1 as:
//    // Entity e1 = {5,8}; it is equivalent to the above initialization for x and y
//    e1.sx = 5;
//    e1.sy = 8;

//    e.Print();
//    e1.Print();
//    e.Prints();
//    e1.Prints();
//    // Because sx and sy are static they are the same for each object of that struct or class: so if I cahnge sx or sy for one onbject it changes for all the objects

//    std::cin.get();
// }

//VERSIONE 2 STATIC VARIABLES
// #include <iostream>
// //// STATIC in a CLASS or STRUCT
// //// I do an example with Struct but this apply as well to classes
// // struct Entity{
// //    int x, y;
// //    static int sx, sy;
// //    void Print()
// //    {
// //        std:: cout << x << ", " << y << std::endl;
// //    }
// //    void Prints()
// //    {
// //        std:: cout << sx << ", " << sy << std::endl;
// //    }
// // };

// // int Entity::sx;
// // int Entity::sy;

// // int main() {
// //    Entity e;
// //    e.x = 2;
// //    e.y = 3;
// //    Entity::sx = 2; //This is a proper form to rewrite it
// //    Entity::sy = 3;

// //    Entity e1;
// //    e1.x = 5;
// //    e1.y = 8;
// //    // I can also initialize e1 as:
// //    // Entity e1 = {5,8}; it is equivalent to the above initialization for x and y
// //    Entity::sx = 5;
// //    Entity::sy = 8;

// //    e.Print();
// //    e1.Print();
// //    e.Prints();
// //    e1.Prints();
// //    // Because sx and sy are static they are the same for each object of that struct or class: so if I cahnge sx or sy for one onbject it changes for all the objects


// //    std::cin.get();
// // }

// //VERSIONE 3 STATIC METHODS with STATIC VARIABLES
// //#include <iostream>
// // STATIC in a CLASS or STRUCT
// // I do an example with Struct but this apply as well to classes
// struct Entity{
//    static int x, y;
//    static void Print()
//    {
//        std:: cout << x << ", " << y << std::endl;
//    }
//    // It's ok because x and y are also static variables: STATIC METHODS CAN NOT ACESS TO NOT STATIC VARIABLES
// };

// int Entity::x;
// int Entity::y;

// int main() {
//    Entity e;
//    Entity::x = 2;
//    Entity::y = 3;

//    Entity e1;
//    Entity::x = 5;
//    Entity::y = 8;

// //    e.Print();
// //    e1.Print();
// //    They can be replaced to
//    Entity::Print();
//    Entity::Print();

//    std::cin.get();
// }

//VERSIONE 4 STATIC METHODS with NOT VARIABLES
#include <iostream>
// // STATIC in a CLASS or STRUCT
// // I do an example with Struct but this apply as well to classes
struct Entity{
    static int x, y;
    static void Print()
    {
        std:: cout << x << ", " << y << std::endl;
    }
    // I get an ERROR because Im using non-STATIC variables inside STATIC METHOD: because a static method inside a class doesn4t have access to the instances of that class but only to static instances of that class. Static methods are unique functions for that class, for all the objects of that class. Each object of a class has its own non static variables and own non static methods but they share in commons (because are the same) the static variables and the static methods.
};

int main() {
    
    Entity e;
    e.x = 2;
    e.y = 3;

    
    Entity e1;
    e1.x = 5;
    e1.y = 8;
    
    Entity::Print();
    Entity::Print();
    
    std::cin.get();
}

