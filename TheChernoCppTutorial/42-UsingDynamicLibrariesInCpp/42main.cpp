/*
DYNAMIC LIBRARIES IN C++
DYNAMIC LINKING

STATIC LINKING happens at compile time, and you put that library inside the executable
in this way there are several optimization that the compiler can perform

DYNAMIC LINKING happens at runtime. This library is not part of the executable but when you lunch it
then the libary is loaded. Tu run the executable file you need the presence of another file that is the 
dynamic library.
It could also happen that instead of loading the dynamic library at the beginning of runtime you can call it 
during the execution of the program.

For dynamic linking you need to include the header file that it could remain the same as for static and dynamic libraries
For doing so, you need to specify the include path in C++/General/"Additional Include Directories"

Usually dynamic libraries are composed by 2 files: "file.dll" and "file-dll.lib". The first file you need to include is 
"file-dll.lib" that contains the pointers to the functions that are present in the real dynamic library called 
"file.dll"

Then you go in Linker/Input/"Additional Dependencies" and you include the "file-dll.lib". 
It compiles well but when you luch the application, the "file.dll" needs to be in the same folder of the executable
otherwise the program can't find the library

At the end of the video there is a part specifying the Processor definition and I didn't understand it very well.

*/