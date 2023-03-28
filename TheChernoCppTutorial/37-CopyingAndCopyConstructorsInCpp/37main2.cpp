/*
Our String class is composed by an int and a pointer
SHALLOW COPY copies the pointer and the int
DEEP COPY copies the entire object with a new memory allocation
To perform a deep copy we need a COPY CONSTRUCTOR
*/

#include <iostream>
#include <string>
#include <stdio.h>

class String {
private:
	char* m_Buffer; // pointer to the char array
	unsigned int m_Size;
public:
	String (const char* string){ 
		m_Size = strlen(string); 
		m_Buffer = new char[m_Size + 1]; 
		memcpy(m_Buffer, string, m_Size); 

		m_Buffer[m_Size] = 0; 
	}

	// DECLARATION of COPY CONSTRUCTOR: it takes a const reference to the same class
	// This is the default C++ copy constructor: it copies the address m_Buffer refers to
	// in the m_Buffer of the String object "other"
	String(const String& other)
	 : m_Buffer(other.m_Buffer), m_Size(other.m_Size){
		// memcpy(this, *other, sizeof(String));// alternative to : m_Buffer(other.m_Buffer), m_Size(other.m_Size)
	 }

	 // If we want to disable copyting we can declare the copy constructor as:
	 // String(const String& other) = delete;
	 // This is what UNIQUE POINTERS have a copy constructor that is eual to delete

	~String (){ // destructor
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index){
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);

};

std::ostream& operator<<(std::ostream& stream, const String& string){
	stream << string.m_Buffer; 
	return stream;
}

void PrintString(String string){
	std::cout<< string << std::endl;
};

int main (){

	String string = "Cherno";
	String second = string;
	second[2]='a';

	std::cout<< string << std::endl;
	std::cout<< second << std::endl;

	// The program crashes in this way because when the destructor of second is called, it tries to frees the same
	// memory address that was already freed when the destructor of "string" was called

	return 0;
}