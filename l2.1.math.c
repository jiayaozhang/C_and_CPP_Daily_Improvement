/*
 * File Created: 9th April 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 9th April 2021
 * Copyright 2021@Guocheng Qian
 * 
 * Lecture 2: Math
 */



#include <stdio.h>
#include <math.h> 

// int32, the first digit is for symbol. from  -2^31 to 2^31 
int main(){
    int n; 
    while (~scanf("%d", &n)){
        getchar(); // if do not add this, then if input str, the code will go in dead loop; 
        if (n % 2){
            printf("%d is even \n", n);
        }else
        {
            printf("%d is odd \n", n); 
        }
        
    }
    return 0; 
}
