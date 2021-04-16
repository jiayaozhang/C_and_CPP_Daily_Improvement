/*
 * File Created: 2nd April 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 9th April 2021
 * Copyright 2021@Guocheng Qian
 * 
 * lecture 1: introduction to C. 
1. printf function (has return values)
2. how to run: gcc l1.1.c -o l1.1.out
3. ./l1.1.out
4. reference: https://en.cppreference.com/

 */

#include <stdio.h>

int main(){
	int n;
	while (scanf("%d", &n) != EOF){ // EOF means the exit   
		// int = printf, print returns the length of the string.  
		printf("  has %d digits \n", printf("%d", n)); 

		// printf("  has %d digits \n  ", printf("%d", n)); 
		// why not correct? there should be no space after \n
	}

	// return 0 is important. 
	return 0; 
}

