/*
How to Deal with OPTIONAL Data in C++


*/

// USING STD OPTIONALS in C++ 17

#include <iostream>
#include <fstream>
#include <optional>

std::optional<std::string> ReadFileAsString(const std::string& filepath) // const because I don't want to modify the string
{
	std::ifstream stream(filepath);
	if (stream){

		std::string result;
		// read file
		stream.close();
		return result;
	}

	// bool outSuccess = true;
	return {};
}

int main (){


	std::optional<std::string> data = ReadFileAsString("data.txt");

	std::string value = data.value_or("Not Preent"); // If the file could not be read
	std::cout << value << std::endl;
		// this function will pass "Not Present" otherwise it will pass the data value

	/*
		ANOTHER USE OF value_or()

		std::optional<int> count;
		int c = count.value_or(100); // If we want to attribue a value to c depending
									// on the optional value of count
	*/

	if (data.has_value()){
		// Here I know if the file was opened 
		std::cout << "File read successfully!\n";
		// data.value();
		// To access the data I can do:
			// data->
			// data.value();
			// std::string& string = *data;

	} else{
		std::cout << "File NOT read successfully!\n";
	}
		

	return 0;

}