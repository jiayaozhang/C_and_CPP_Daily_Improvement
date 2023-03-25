
#include <iostream>
#include <string>
#include <stdlib.h>


int main(){


	// const char* name = "Cherno"; or I can also write and it's the same thing"
	const char* name = u8"Cherno"; // 1 byte per character

	const wchar_t* name2 = L"Cherno"; // 2 bytes per character in Windows and 4 per character in Linux and Mac

	const char16_t* name3 = u"Cherno"; // 2 byte per character: it uses utf16

	const char32_t* name4 = U"Cherno"; // 4 byte per character: it uses utf32

	std::cout << name << std::endl;


	return 0;
}