/*
AUTO KEYWORD

when the return types are known because the variables have already been declared,
instead of specify them, it is possible to use "auto" 

*/ 

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

class Device{};

class DeviceManager{
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const {
		// first const: the method can't modify anythingm; second const the paramenter that is passed
		// to the method can't be modified
		return m_Devices;
	}
};

int main(){

	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");

	for(std::vector<std::string>::iterator it = strings.begin();
		it != strings.end(); it++) {// I'm using an iterator
		std::cout << *it << std::endl;
	}

	for( auto it = strings.begin();	it != strings.end(); it++) { // I used auto!
		std::cout << *it << std::endl;
	}

	DeviceManager dm;
	const std::unordered_map<std::string, std::vector<Device*>>& devices = dm.GetDevices();

	using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
	// typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap; // alternative to using 
	const DeviceMap& devices1 = dm.GetDevices();

	const auto& devices2 = dm.GetDevices(); // I can also use auto but I need to write "const" and the "&" symbol too
	// In fact if I don't write the "&" symbol we are going to have the whole map copied and not passed by reference
	// Even if you are retourning a reference, auto will not return a reference!!
	// If you don't write reference than auto makes copy the variable: in this case auto will substitute
	// exactly what DeviceMap substitutes.
	// You also need to write const with auto!! it doesn't do it by itself.

	/*
		Better to use "auto" for very long types
	*/


	return 0;
}