// CLASSES vs STRUCTS in C++

// The only difference is that a CLASS is PRIVATE by default, while STRUCT is PUBLIC by default

// Ex: WORK
struct Player {
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

//Ex: NOT WORK
struct Player {
private: [MOD]
	int x, y;
	int speed;
	void Move( int xa, int ya) [M]
	{
		x += xa * player.speed; [M]
		y += ya * player.speed; [M]
	}	
};

int main()
{
	Player player;
	player.Move(player, 1, -1); [M]
}


// The C code doesn't have classes but it has structures. This is because in C++ exist classes and structs
// if we write 
// #define struct class
// the code will replace struct with class

// How practically use STRUCT and CLASSES
// STRUCT when you just want ot group variables and you don't want to add much more other functionality
// In STRUCT you can also include methods

// For inheritance: never use inheritance with struct. If I have some kind of inheritance Hierarchy is better to use CLASSES for that because it complexify all. 

// If you have inheritance from a class in a struct some compilers will give you a warning be cause using struct and class together.

