// C++ Header Files

// Java and CSharp don't have the concept of header files or different types of file.

// Header files are used to declare some types of function that can be used in the program who has that include of header file. 

// The header files contains only declarations, not deifinitions.

//#include  "remo.h"

//everything that start with # is a pre-process command or directive so its evaluated before the compilation

#pragma once 
//-> prevents us to include a single header file multiple times into a single transaltion unit. It is because if we declare a STRUCT multile times in a cpp file than we have a duplication error

#ifndef _LOG_H
#define _LOG_H
//...
#endif
//In this case if _LOG_H is not deined the compiler will go through the #ifndef otherwise it won't. This was used in the past, now we prefer to use #pragma once

//Difference between #include "__" and #include <__>
//<> the header file is in one of the include directories and does not search for relative paths
//"" set a relative path
//"../Log.h" go back one directory relative to the directory containing the cpp file and search for Log.h

#include <iostream> 
//it doesn't contain any extention. It has a file with no extentions because c++ separates the C++ standard library header files with the C standard library header files
//Header files that are in the standard C library are 
#include<stdlib.h> 
//they have a .h extention
//In this way you can differentiate between C and C++ standard library files
