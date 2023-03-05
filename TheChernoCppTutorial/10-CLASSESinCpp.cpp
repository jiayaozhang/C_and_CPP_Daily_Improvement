//CLASSES in C++

//Objects-Oriented Programming

// A class contains all the data and variables for our defined class
// Classes are types, so creating a class we are creating a new type

class Player {
	int x, y;
	int speed;	
}; // IMPORTANT to put semicolon at the end of the brackets for the class (functions brackets didn't need them)

Player player;
// here i created a variable called player of type Player
// the variables made from classes are objects called INSTANCES
// so player is an INSTANCE

player.x = 5; 
//This doesn't work because player can't access to x because x is a private memeber declared in the class Player

// VISIBILITY
// When you specify the visibility of the stuff inside the class: by default all the content of a class is provate: only visible to the functions present in the class. So only the functions inside that class can actually access those variables. If we want to access those variables from the main function we need to made them public.

class Player {
public:
	int x, y;
	int speed;	
};

int main()
{
	Player player;
	player.x = 5;
}

//Ex: we want to create a function that moves the playes

class Player {
public:
	int x, y;
	int speed;	
};

void Move(Player& player, int xa, int ya)
{
	player.x += xa * player.speed;
	player.y += ya * player.speed;
}

int main()
{
	Player player;
	Move(player, 1, -1);
}

//FUNCTIONS INSIDE CLASSES ARE CALLED METHODS
//So we can put the functions that receive as input the data from the class inside that class and those functions are called methods

//Ex 

class Player {
public:
	int x, y;
	int speed;
	void Move( int xa, int ya) 
	{
		x += xa * player.speed; 
		y += ya * player.speed; 
	}	
};

int main()
{
	Player player;
	player.Move(player, 1, -1); 
}


//So a class is composed by DATA and FUNCTIONS (methods) that can manipulate those data

