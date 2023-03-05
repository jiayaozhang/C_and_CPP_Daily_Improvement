//Control Flow in C++ (continue, break, return)

// They are used inside a loop and they are:
// CONTINUE, BREAK, RETURN

// CONTINUE: can be used only inside a loop and says to continue to the next iteration of the loop

// BREAK: used in loops and switch statements and it says get out of the loop

// RETURN: will get out of the function entirely. If it's a void function return its ok but if the function returns a value you need to say also the value you return. Return can be written anywhere in the code

//Ex: Continue doesn't impact on the for loop
for (int i = 0; i<5; i++){
	std::cout << "Hello World" << std::endl;
	cin.get();
	continue;
}

//Ex: The loop prints only for odd iterations
for (int i = 0; i<5; i++){
	if (i % 2 == 0)
			continue;
	std::cout << "Hello World" << std::endl;
	std::cout << i << std::endl;
	cin.get();
}

//Ex: When break is hit it exits the loop and in this case it prints nothing because 0 % 2 == 0 so break exit the entire loop
for (int i = 0; i<5; i++){
	if (i % 2 == 0)
			break;
	std::cout << "Hello World" << std::endl;
	std::cout << i << std::endl;
	cin.get();
}

//Ex: Return exits the entire loop amd the whole function 
for (int i = 0; i<5; i++){
	if (i % 2 == 0)
			return 0;
	std::cout << "Hello World" << std::endl;
	std::cout << i << std::endl;
	cin.get();
}
