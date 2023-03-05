//How to DEBUG C++ in VISUAL STUDIO

//break point: when the execution hits that line, the program pause and take a look at the memory of the program. Diagnosis the memory allows to see whhere is the problem.

//If you put a brak point to an empty line, the program won't pause because that line is not gona be executed
/**MODE: Release and Debug. In Debug mode it's ok for breakspoint but in Release mode the compiler rearrange the code so that maybe the line I put the breakpoint doesn't get hit.

STEP INTO: go into the function
STEP OVER: go to the next line of code
STEP OUT: go out of the function end returns to who called 

an arrow mans that it hasn't execute that line of code yet but if you step into in will

In the left corner there are Autos, Locals and Watch where you can monitor your variables

To view the entire memory of the program -> MEMORY VIEW
Debub/Windows/Memory/Memory 1
In the panel: at the left the memory adresses, in the middle the actual values represented in hexadecimal format and on the right the ASCII interpretation of those numbers
If you want to know where your variable a is located you need to know its memory address and to do that in the Adress bar you can type: &a
&a get the memory address of the variable a
In this case it will show you the value the value of the variable a and it will be in hexa

In Hexadecimal every 2 digits are 1 Byte

const char* string = "Hello" in this case string is a pointer to a char constant: string contains the memory address of the const char "Hello"
If in the MEMORY VIEW I paste the string value that is an address I got those Bytes that in ASII are Hello

C start with index 0

A program is basically all MEMORY and look at the memory its just what we need
