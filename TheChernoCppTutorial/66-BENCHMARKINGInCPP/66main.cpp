/*
Measuring Performances in Cpp
1.50
*/

#include <iostream>
#include <memory>
#include <chrono>

class Timer
{
private:
	std::chrono::time_point< std::chrono::high_resolution_clock> m_StartTimePoint;

public:
	 Timer(){ // Constructor returns a chrono time pointer
	 	m_StartTimePoint = std::chrono::high_resolution_clock::now(); //STD chrono time pointer
	 }
	 void Stop(){
	 	auto m_endTimePoint = std::chrono::high_resolution_clock::now();

	 	auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimePoint).time_since_epoch().count();
	 	auto end = std::chrono::time_point_cast<std::chrono::microseconds>(m_endTimePoint).time_since_epoch().count();

	 	auto duration = end - start;
	 	double ms = duration * 0.001;

	 	std::cout << duration << "us (" << ms << "ms)\n"; 
	 }
	 ~Timer(){
	 	Stop();
	 }
	
};

int main(){

	int value = 0; // This is out of the scope otherwise 
					// I would not be able to print out value in the console

	{
		Timer timer;
		for (int i = 0; i < 1000000; i++)
			value += 2;
	}

	std::cout << value << std::endl;

	return 0;

	// __debugbreak(); // It is used by Visual Studio to insert a breakpoint
					// in tha lines of code.

	// NOTE: when you are benchmarking it is important to be sure that you are actually measuring
	// what you need. In fact, in this example, using the debug mode, the for loop is computed during compilation. 
	// In release mode, the for loop is not computed, in fact during the compilation an optimization process
	// takes place that substitute the for loop with its result. In this case you just have the value 2000000
	// without going in the for loop. Quindi in debug mode misuri davvero il tempo di esecuzione
	// mentre in release mode non misuri niente, perche' di fatti non ci sta l'esecuzione.
}