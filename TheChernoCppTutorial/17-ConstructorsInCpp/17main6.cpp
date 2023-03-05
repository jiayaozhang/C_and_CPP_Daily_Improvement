//
//  main5.cpp
//  17-ConstructorsInCpp
//
//  Created by Remo Lazazzera on 25/01/2020.
//  Copyright © 2020 Remo Lazazzera. All rights reserved.
//

#include <stdio.h>
#include <iostream>


/*
 If we use static methos of a class the constructor won't run
*/

class Log{
    
public:
    
    Log() = delete;
    
    /* Here I deleted the constructor
     so I can't instantiate Log: in fact
     I've an error in declaring
     Log l;
     */
    
    static void Write(){
        
    }
    
};

int main()
{
    Log::Write();
    Log l;
    
}
