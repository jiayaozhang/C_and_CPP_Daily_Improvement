REFERENCES in C++

Reference is just an extension of pointers
References. are references to variables

int a = 5;
int* b = &a;
*b = 10; is the same as a = 10;
int& ref = a;
Here we created an alias
ref = 2; is the same as a = 2;

The reference is not a pointer is just an alias for a
The compiler will just see one variable a, the variable reference doesn't exist because it's just an alias

Ex:

void Increment (int value){
	value++;
}
int main()
{
	int a = 5;
	Increment(a);
	std::cout << a << std::endl;
	std::cin.get();
}
In this case the value a is copied inside the variable value in the function Increment


Ex:

void Increment (int* value){ [MOD]
	(*value)++; [MOD]
}
int main()
{
	int a = 5;
	Increment(&a); [MOD]
	std::cout << a << std::endl;
	std::cin.get();
}
In this case the address value of a is COPIED in value and the data at the memory address value is incremented.
I need to put parenthesis to (*value) because first I need to dereference and then I need to increment the value.

x:

void Increment (int& value){ [MOD]
	value++; [MOD]
}
int main()
{
	int a = 5;
	Increment(a); [MOD]
	std::cout << a << std::endl;
	std::cin.get();
}
In this case I pass a to the function Increment that takes it as a reference

Everything you can do with references you can also do with pointers, but references are a lot cleaner than pointers

What you CAN'T DO with references is this
int a = 5;
int b = 8;

int& ref = a;
ref = b; NOT POSSIBLE to change a reference
This will eventually produce: a=b; so at the end a=8, b=8.


With pointers I can do:
int a = 5;
int b = 8;

int* ref = &a;
*ref = 2; corresponds to a = 2;
ref = &b; ref now is pointing to b
*ref = 4; corresponds to b = 4;
