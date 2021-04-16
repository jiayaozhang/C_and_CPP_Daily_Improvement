/*
 * File Created: 16th April 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 16th April 2021
 * Copyright 2021@Guocheng Qian
 * Charpeter3. section1. 
 * Key: 1. structure programming! 
 * 2. if, eles. iterations (while). and 
 * 3. example: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// 回文数判断：只需要找到divded 数到 一半就可以，不需要完整的reverted number.  
// 要有特殊情况的思维， 特殊情况： 1）一般算法不适用的情况； 2）可以帮助加快的情况。 
int rev_num(int x){
        // Special cases: 

        // As discussed above, when x < 0, x is not a palindrome.

        // Also if the last digit of the number is 0, in order to be a palindrome,
        // the first digit of the number also needs to be 0.
        // Only 0 satisfy this property.


        // if add paraenthesis 
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        // here, for get the reverted number. 
        // important! do not get the full reverted number, only need the half of it. 
        int reverted_number = 0;    // store the reverted number 
        // while (x > 0 ){ // you do not need get the full number. 
        while (x > reverted_number){
            reverted_number = reverted_number * 10 + x % 10; // x % 10 returns the 
            x /= 10; 
        }
        

        // When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
        // For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123,
        // since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it.
        return x == reverted_number || x == reverted_number/10;
}

// should be familar with the structure of main function 
// int main(){
//     return 0; 
// }



int main(){
    int n; 
    scanf("%d", &n); // input the number n 
    printf("input number is: %d \n", n);

    bool is_palindrome = rev_num(n); 

    // how to print true or false? 
    // printf("input number is palindrome %d \n", is_palindrome);

    // '': single character. ""
    printf("input number is palindrome %s \n", is_palindrome ? "true": "false");
    return 0; 
}