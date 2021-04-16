/*
 * File Created: 2nd April 2021
 * Author: Guocheng Qian (guocheng.qian@kaust.edu.sa)
 * Last Modified: 9th April 2021
 * Copyright 2021@Guocheng Qian
 * 
 * lecture 1: introduction to C. 
1. scanf function (use with getchar())
2. output redirect : ./a.out > out  (the output in the terminal will be saved to out)
3. [ ] formatting the string 
[set]	
matches a non-empty sequence of character from set of characters.
If the first character of the set is ^, then all characters not in the set are matched. If the set begins with ] or ^] then the ] character is also included into the set. It is implementation-defined whether the character - in the non-initial position in the scanset may be indicating a range, as in [0-9]. If width specifier is used, matches only up to width. Always stores a null character in addition to the characters matched (so the argument array must have room for at least width+1 characters)

 */



#include <stdio.h>

int main(){
	char str[100] = {0};
	int ret = 0; 
	// != -1 , equals to != EOF (End Of File, end of input, Ctrl-d)

	// [ ] is the 字符集, for defining the recoginizable str character. [^\n], will neglect \n
	// % matches literal %
	while ((ret = scanf("%[^\n]s", str)) != -1) {
		// why add return value ret? easy for debug...
		getchar(); // Reads the next character from stdin. (delete the first char from the stream)
		// printf("%s ret = %d \n", str, ret);
		printf(" has %d digits \n", printf("%s", str));
	}
	return 0; 
}
