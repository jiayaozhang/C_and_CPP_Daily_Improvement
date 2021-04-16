/*
 * File Created: 16th April 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 16th April 2021
 * Copyright 2021@Guocheng Qian
 * 
 * chapter 4: recursive functions. 
 */

#include <stdio.h> 


// functions.
// local variables. scope. 
// pass address, 

// recursive: 
/*
* 边界条件
* 处理过程和递归过程，大问题 -> 小问题
* 结果返回
*/

int cal_factorial_recursive(int n){
    // recursive: expand and then reduce. 
    // recursive的一个问题是，程序需要 压栈！ 栈的大小大约是 8 Mb. resursive有爆栈的风险。

    // if (n<2){ // 递归出口
    //     return 1; 
    // }
    if (n==1) return 1; // better coding 
    return n*cal_factorial(n-1);  // 子问题。
}

// int cal_factorial_iteration(int n){
//     int _iteration(int producter, int counter){
//         if (counter > n){
//             producter = counter * producter; 
//             counter += 1;

//         }
//         return producter, counter 
//     }
//     int producter =1, counter = 1; 
//     producter, counter = _interation(producter, counter)
// }

// int cal_factorial_loop(int n){
//     // iteration: 
//     if (n<2){
//         return 1; 
//     }
//     return n*cal_factorial(n-1); 
// }



int main(){
    int n; 
    scanf("%d", &n); // 为什么scaf函数没有传出任何值，但却修改了n的value呢？ 因为传入的是 n的地址。
    
    int factorial = cal_factorial(n);
    printf("the factorial of input number %d is: %d \n", n, factorial); 
    return 0;
}
