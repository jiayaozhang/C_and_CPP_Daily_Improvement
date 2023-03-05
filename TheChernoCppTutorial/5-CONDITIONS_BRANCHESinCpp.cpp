CONDITIONS and BRANCHES in C++

if statements slow the program down

bool comparisonResult = x == 5;


Disassembling View you can Access from the Debug once you put some BreakPoints

EXAMPLE 1
int x = 6;
if (x){
	In this case I enter the if because x is differetn from 0
}

EXAMPPLE 2
const char* ptr = "Hello"
ptr is a pointer to a const char called "Hello"
ptr contains the adress memory of "Hello"
if (ptr)
	In this case it enters the if because the pointer is not null (null = 0)

EXAMPPLE 3
const char* ptr = nullptr
if (ptr)
	In this case it NOT enters the if because the pointer is null (null = 0)

EXAMPPLE 4
if ()
else if ()
else

LOGICAL and MATHEMATICAL PROGRAMMING
