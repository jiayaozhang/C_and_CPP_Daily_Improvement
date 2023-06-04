/*
How to Deal with OPTIONAL Data in C++
they are used to see if the data are present or they are not present.
In this case C++ 17 provides std optional.

*/

// OLD WAY TO READ A FILE

#include <iostream>
#include <fstream>

std::string ReadFileAsString(const std::string& filepath, bool& outSuccess) // const because I don't want to modify the string
{
	std::ifstream stream(filepath);
	if (stream){

		std::string result;
		// read file
		stream.close();
		outSuccess = true;
		return result;
	}

	outSuccess = true;
	return std::string();
}

int main (){

	bool fileOpenedSuccessfully;
	std::string data = ReadFileAsString("data.txt", fileOpenedSuccessfully);

	if (fileOpenedSuccessfully){
		// Here I know if the file was opened successfully
	}
		

	return 0;

}