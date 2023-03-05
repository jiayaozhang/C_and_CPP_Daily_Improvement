POINTERS in C++

A Pointer is an integer, a number that stores a memory address.

The memory is a big straight , a linear one dimensional line. Every Byte of data in the memory has its own address.

The Pointer is the address that tells us where a specific Byte it in the Memory.

The Pointer is just a memory address and doesn't have any type. The type we specify for pointers is the type of data at that address: we write a type for pointers just to make life easier syntactically in the source code. 

void* ptr = 0; 
In this case I didn't specify the type of the data stored at that address. ptr=o means that the pointer is not specified and we can also write 
void* ptr = NULL; or I can also write:
void* ptr = nullptr;

int var = 8;
void* ptr = &var;
Now in ptr variable we have the memory address of the variable var
If during the Debug, after a brakpoint, I go to the MEMORY VIEW and I type the value of ptr, I got this is nte address
08 00 00 00
An int is a 4 Bytes and the memory is written in hexa, so 2 hexa digits are 1 Byte. The memory start writing as the MSB (Most Significant Byte)

The point size can be a 32-bit integer or a 64-bit or 16-bit.
If I change the type of ptr
int var = 8;
int* ptr = &var;
NOTHING CHANGES

int var = 8;
void* ptr = &var;
If I want to access the data at the pointer address for reading or writing, there the referencing comes
*ptr -> I'm dereferencing the pointer
*ptr = 10; ERROR because the compiler doesn't know if to write 10 on 4 Bytes or 8 Bytes... For this reason we need to specify the type of pointers:
int var = 8;
int* ptr = &var;
*ptr = 10; is like to write var = 10;


TO ALLOCATE MEMORY
I can use a char to allocate memory because I know that a char is 1 Byte:
char* buffer = new[8];
This has allocated 8 Bytes of Memory and returns a pointer to the beginning of that block of memory
memset(buffer, 0 , 8); 
it fill 8 Bytes of memory with 0 starting from the address given by the pointer buffer.
delete[8] buffer;
to delete the data when we are don with it

Pointers are varables and we can create pointers of pointers
char* buffer = new[8];
memset(buffer, 0 , 8);
char** ptr = &buffer; 
ptr is a doble pointer: it points to a pointer

MEMORY if I go to the memory address of ptr, the data shown in the MEMORY VIEW is: b8 f1 02 00 -> 4 Bytes = 32 bits because I have a 32-bit memory. A cause the endianess of the pc if I want to reconstruct the memory address of buffer I need to reverse the data: 00 02 f1 b8
In this way If I type that in the MEMORY VIEW I got the buffer data
