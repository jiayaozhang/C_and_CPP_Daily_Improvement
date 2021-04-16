/*
 * File Created: 9th April 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 9th April 2021
 * Copyright 2021@Guocheng Qian
 * Lecture 2: math. swap two values
 * inplcae operations using bit operations. 
 */

#include <stdio.h>
#include<math.h>

int main(){

    int a = 3, b=4; // define two values in single line. 
    // now swap two values using inplcae operations

    a ^= b;  // an inplace version of a = a^b ; 
    b ^= a;  // b^a^b -> a 
    a ^= b; 

    printf("after swapping: %d and %d \n", a, b); 
    return 0; 
}