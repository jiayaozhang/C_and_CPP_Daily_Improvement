/*
Track MEMORY ALLOCATIONS the Easy Way in C++

Valgrind is a great tool for checking for memory leaks or any memory related errors. (C & C++)

*/

#include <iostream>
#include <memory>

struct AllocationMetrics{
	uint32_t TotalAllocated = 0;
	uint32_t TotalFreed = 0;

	uint32_t CurrentUsage() { return TotalAllocated - TotalFreed; }
};

static AllocationMetrics s_AllocationMetrics;

// Overloading the new operator globally
void* operator new(size_t size){

	s_AllocationMetrics.TotalAllocated += size;

	return malloc(size); 
}

// Overloading the delete operator globally
void operator delete(void* memory, size_t size)
{
	s_AllocationMetrics.TotalFreed += size;
	free(memory);
}

struct Object{
int x, y, z;
};

static void PrintMemoryUsage(){
	std::cout << "Memort Usage: " << s_AllocationMetrics.CurrentUsage() << " bytes\n";
}

int main(){

	PrintMemoryUsage();
	std::string string = "Cherno";
	PrintMemoryUsage();

	Object* obj = new Object; // creating on the HEAP
	PrintMemoryUsage();

	{
		std::unique_ptr<Object> obj1 = std::make_unique<Object>();
		PrintMemoryUsage();
	}
	PrintMemoryUsage();
	

	return 0;
} 