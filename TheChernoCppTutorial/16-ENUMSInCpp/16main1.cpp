//
//  main1.cpp
//  16-ENUMS in Cpp
//
//  Created by Remo Lazazzera on 23/01/2020.
//  Copyright © 2020 Remo Lazazzera. All rights reserved.
//

#include <iostream>

/*
 enums have to be integers!!! they can't be float
 by default enums are 32-bit integers (4 bytes), but I can change the type
 */

/* to specify the enum type I can write:
 
 enum Example : unsigned char
 {
    A,B,C
 };
 
 */

enum Example // to specify the enum type I can write: enum Example : unsigned char  {};
{
    A,B,C
};
/*
 A, B, C are always numbers: in this case if I dont' specify anything A is 0, B is 1, C is 2
 I can also write A = 5,B,C in this case B is 6 and C is 7
 I can also write A=5, B=10, C=9
 */

int a = 0;
int b = 1;
int c = 2;
/*
 the value A is already been assigned and is equal to 0
 for this reason I can't declare anymore int A = 0;
 */


int main(int argc, const char * argv[]) {

    Example value = B; // I can't assign to value something different than A,B,C
    
    if (value == B){
        // Do something here
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
