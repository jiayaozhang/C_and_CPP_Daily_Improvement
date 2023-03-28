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

void PrintString(const String& string){
	// string[2] = 'X'; // because of const I can't do it anymore, I can't modify string that is passed in the function
	
	// If now I want to copy a string inside this I can write:
	// String copy = string; // This will call the copy constructor of String
	// In fact if it is uncommented in the console "Copied String!" appears again two more times
	std::cout<< string << std::endl;
};

int main (){

	String string = "Cherno";
	String second = string;
	second[2]='a';

	PrintString(string);
	PrintString(second);
	// Now I don't copy String objects in PrintString anymore because I'm assing their reference
	// In fact now in the console "Copied String!" appears only one time

	return 0;
}

/*
NOTE : Always pass objects by const reference 
*/

