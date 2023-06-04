/*
Measuring Performances in Cpp
1.50
*/

#include <iostream>
#include <memory>
#include <chrono>
#include <array>

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

 	// Performance of a shared pointer versus a unique pointer. 
 	// Then after testing in debug is better to test in release mode.

 	struct Vector2{
 		float x, y;
 	};

 	std::cout << "Make Shared\n";
 	{
 		std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
 		Timer timer;
 		for (int i = 0; i < sharedPtrs.size(); i++)
 			sharedPtrs[i] = std::make_shared<Vector2>();
 	}

	std::cout << "New Shared\n";
  	{
 		std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
 		Timer timer;
 		for (int i = 0; i < sharedPtrs.size(); i++)
 			sharedPtrs[i] = std::shared_ptr<Vector2>(new Vector2());
 	}

 	std::cout << "Make Unique\n";
  	{
 		std::array<std::unique_ptr<Vector2>, 1000> sharedPtrs;
 		Timer timer;
 		for (int i = 0; i < sharedPtrs.size(); i++)
 			sharedPtrs[i] = std::unique_ptr<Vector2>(new Vector2());
 	}

	return 0;

	}