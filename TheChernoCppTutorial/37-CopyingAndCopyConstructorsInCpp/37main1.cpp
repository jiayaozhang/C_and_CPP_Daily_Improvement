#include <iostream>
#include <string>
#include <stdio.h>

class String {
private:
	char* m_Buffer; // pointer to the char array
	unsigned int m_Size;
public:
	String (const char* string){ // const because I don't want to modify string
		m_Size = strlen(string); // each character is 1 byte of memory
		m_Buffer = new char[m_Size + 1]; // I add the null termination character
		memcpy(m_Buffer, string, m_Size); // this does the same thig as the foor loop below
		// moreover strcpy includes the null termination character
		// for (int i=0; i< m_Size; i++)
		// 	m_Buffer[i] = string[i];
		m_Buffer[m_Size] = 0; // this is to manually add the null termination character
	}
	~String (){ // destructor
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index){
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
	// declaring it friend of this class, I let the operator << to have access 
	// to the Sting class private member m_Buffer

};

// OVERLOAD OPERATOR
std::ostream& operator<<(std::ostream& stream, const String& string){
	stream << string.m_Buffer; // m_Buffer is a private member of String class, 
								// however I can access to it because I declared the operator <<
								// as friend of the class Sting
	return stream;
}

int main (){

	String string = "Cherno";
	String second = string;
	second[2]='a';

	// here we have two strings object in memory that point to the same char array in memory
	// in fact with this operation we perfomed a SHALLOW COPY. The two strings contains the same char* m_Buffer address
	// If I modify second, also string gets modified
	// Then the program crashes in this way because when the destructor of second is called, it tries to frees the same
	// memory address that was already freed when the destructor of "string" was called
	
	std::cout<< string << std::endl;
	std::cout<< second << std::endl;

	return 0;
}