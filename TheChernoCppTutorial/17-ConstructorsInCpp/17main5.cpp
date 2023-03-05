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
 If we use static methods of a class (like Wite in this example), the constructor won't run
*/

class Log{
    
private:
    Log(){}
    
public:
    static void Write(){
        
    }
    
};

int main()
{
    Log::Write();
    Log l;
    
    /*
     Here I just want that people use Log::Write(); without creating an instance. However Cpp always create a constructor by default.
     If the constructor is private, it can't be accessed so there is an error!
     */
}
