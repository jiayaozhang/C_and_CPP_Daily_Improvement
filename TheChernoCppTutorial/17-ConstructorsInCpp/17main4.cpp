//
//  main5.cpp
//  17-ConstructorsInCpp
//
//  Created by Remo Lazazzera on 25/01/2020.
//  Copyright © 2020 Remo Lazazzera. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class Entity{

    public:
        float X, Y;

    Entity(){
        X = 0.0f;
        Y = 0.0f;
    }
    
    Entity(float x, float y){
        X = x;
        Y = y;
    }
/*
As for methods also for contructor I can declare different constructors with different loads and parameters in input
*/
    void Print(){
        std::cout << X << ", " << Y << std::endl;
    }
};

int main()
{
    Entity e(10.0f,50.0f);
    std::cout << e.X << std::endl;
    e.Print();

    return 0;
}
