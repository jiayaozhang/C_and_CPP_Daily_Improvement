/*

Linking binaries is faster than linking source code and is preferable.
Now we are going to deal with binaries

 Binaries could sometimes not be available for the project so you need to build by yourself

 Download pre-compiled binaries: you grab the 32bit or 64bit binaries depending on the type of application 
 you want to build. If you want to build a 32bit or 64bit application.

 A library is composed by 2 parts: include directory and library directory.
 Include directory has a bunch of headre files
 Library directory has the pre-built binaries of the library functions

There are STATIC and DYNAMIC Libraries and you can choose to link them statically or dinamically

STATIC: means that the library is put inside your executable file and compiled with it. In this case you just need your 
executable file without others.

DYNAMIC: it is linked at runtime. Dynamic libraries you can load them on the fly (there is a function 
called load library that will load the dynamic library) or at luch time that loads your DLL (Dynamic Link Library)
file. In this case your executable file need the presence of an external file that is the dynamic library 
(like DLL) 

Linking statically can result in a faster application than dynamic linking because there
are some kind of optimizations that can be performed during the compiling time that are not possible
if we have an external dynamic linked library, that need to stay intact.

include can use "" or <> the difference is that "" at first search in the relative path of the solution and then in the compiler path
while <> search directly in the compiler path

So to include a library into you code you need, at first, to add the header file of the library, present in the folder include,
to the "Additional Include Directories"
and then you need to link the library, present in the folder library, to your Linker. In particular you specify
for the Linker/General the Additional Library Directories and then in the Linker/Input you input the library name in
"Additional Dependencies"

NB: when you specify the path of the library header or the library itself is better to use a relative path
to your project folder using for example in visual studio the macro $(SlutionDir) to use like 
$(SlutionDir)Remo\Cpp

*/