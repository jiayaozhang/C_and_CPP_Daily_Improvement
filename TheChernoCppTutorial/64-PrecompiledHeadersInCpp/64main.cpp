/*
PRE-Compiled Headers in Cpp: pch files

In a cpp file when I include vector, for example, the compiler copies in the main cpp file
the vector header, and also the headers connected with vector. 
If my cpp program is composed by many cpp files and in all of them
I included vector, then the compiler copies the vector header in all those files.
Then the Linker will to the rest of the job. 3.17 

You can use instead the pre-compiled header. It takes a buch of header file, 
you said to take, compiles them once and stores them in a binary format that is faster
for the compiler to deal with. So now that you have the precompiled headers,
instead of including vector in your cpp files, you include the pre-compiled header
that it already has everything you need.

In the pch files you don't put files that you usually change, because otherwise 
you need to recompile the file and this takes time. 
Is better to put inside pch, files that I use very often but that I don't modify frequently. 

For example you can put in your pre-compiled header the cpp standard library
or the window cpp library, that are libraries that you won't modify, 
that you frequently use and that they are very large as well (windows cpp library mostly!)

But if you put everything you need inside the pch file and you include it inside all your cpp files
then you don't really know what the cpp files needs to run, which libraries each of them is using.
So if you want to reuse one cpp file code in another project than you don't know which libraries it is using.
The code is less exportable.
Better not include dependencies in the pch.


See video from 12.00 to explain how to use pre-compiled headres in Visual Studio
and with gcc.

In Visual Studio To use pre-compiled headers go to Project/Properties/Precompiled Headers and set 
to Use or to Create depending on the file.

*/



