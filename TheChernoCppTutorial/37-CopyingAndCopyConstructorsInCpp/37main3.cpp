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
	char* m_Buffer; 
	unsigned int m_Size;
public:
	String (const char* string){ 
		m_Size = strlen(string); 
		m_Buffer = new char[m_Size + 1]; 
		memcpy(m_Buffer, string, m_Size); 

		m_Buffer[m_Size] = 0; 
	}

	String(const String& other)
	 : m_Size(other.m_Size){
		m_Buffer = new char[m_Size + 1]; // allocate a new buffer
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1); // copy the content of the buffer 
		std::cout<< "Copied String!" << std::endl;
	}

	~String (){ 
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
	string[2] = 'X';
	std::cout<< string << std::endl;
};

int main (){

	String string = "Cherno";
	String second = string;
	second[2]='a';

	PrintString(string);
	PrintString(second);
	// In these two cases when I pass String object to PrintString, these objects are
	// copied in the PrintString function and then that memory is freed from the heap
	// In fact in the terminal I see two more lines of "Copied String!"

	return 0;
}