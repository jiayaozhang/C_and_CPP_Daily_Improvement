/*
CHRONO Cpp library
I need to use Cpp 14 version

This is called INSTRUMENTATION: you modify your code in order to containig profiling tools
like timing.

There are also automated tools in Visual Studio to automate this process.  
*/

#include <iostream>
#include <chrono>
#include <thread>

struct Timer{

	std::chrono::time_point<std::chrono::steady_clock> start, end;
	// to find the type of "start" and "end" I put the cursor of the mouse 
	// on "start" in the main and Visual Studio will tell 

	std::chrono::duration<float> duration;

	Timer(){ // constructor
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer(){ // de-structor
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "Timer took " << ms << "ms" << std::endl;
	}


};

void Function(){

	Timer time; 

	for(int i = 0; i < 100; i++)
		// std::cout << "Hello" << std::endl;
		std::cout << "Hello\n"; // This is faster than the std::endl
}

int main(){

	Function();

	return 0;

}