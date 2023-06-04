/*
The correct way to write C++
2.09

From pointers to smart pointers, it helps reducing memory leaks.

If I allocate memory on the HEAP and then I forget to free that memory then
I have a MEMORY LEAK.

OWNERSHIP PROBLEM: I'm passing the same pointer to different functions, then who
is going to delete that pointer? When? You can create a function that executes after 
all the previuos functions are terminated and let that function to free the memory.

For this dealing with smarto pointers makes you deal with the deletion part and freeing
the memory.

WEAK REFERENCES and WEAK POINTERS: see about it.

Better and always use SMART POINTERS.

*/