/*

THREAD 
Nowadays, processors have more than one logical thread of processing.
Until now we just implemented one single thread code: one instruction at a time.
how we can make the code running in parallel. For example while we are waiting 
for the user to do some input we can perform other operations.

For Cpp 14 version 
*/

#include <iostream>
#include <thread>

static bool s_Finished = false; 

void DoWork(){

	using namespace std::literals::chrono_literals;

	std::cout << "Started thread id:" << std::this_thread::get_id() << std::endl;

	while (!s_Finished){
		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s); // sleep for a second before printing again
		// I used the command this_thread to give commands to the current thread
	}

}

int main(){

	std::cout << "Started thread id:" << std::this_thread::get_id() << std::endl;

	std::thread worker(DoWork); // I pass DoWork as a function pointer

	std::cin.get(); // Wait for the user to insert "Enter"
	s_Finished = true;

	// In this case I've two threads: the main thread and the worker thread
	// They are both running together.

	worker.join(); // This is the "waiting", it says the main thread to wait
				   // for the worker thread to finish. the code below won't run until 
				   // everythin is in the DoWork function is finished.
	std::cout << "Finished." << std::endl;
	std::cout << "continuing to thread id:" << std::this_thread::get_id() << std::endl;

	return 0;
}