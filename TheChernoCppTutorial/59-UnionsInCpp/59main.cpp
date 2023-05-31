/*
Unions in Cpp
are struct with only one member inside. Unions are a lot used with types puning.
It is very useful when you want ot give the same name to two different variables.

*/

#include <iostream>

int main(){

	struct UnionContainer{
		union{
			float a;
			int b;
			// members in a union always occupy the same space. Here float is 8 Bytes
			// so the space occupied by the union is 8 Bytes. If I have access to b
			// the the program will read only the first 4 Bytes of that memory. For this reason,
			// when I print u.b in the example below, I've a strange number instead of 2.0f assigned to a
		};
	};

	UnionContainer u;
	u.a = 2.0f;
	std::cout << u.a << ", " << u.b << std::endl;

	// We get: "2, 1073741824" where "1073741824" is the int representation
	// of the memory of a float. It was like puning basically.

	return 0;
}