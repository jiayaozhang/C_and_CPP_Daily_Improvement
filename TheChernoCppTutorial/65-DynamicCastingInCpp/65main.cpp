/*
Dynamic Casting in Cpp

dynamic_cast is evaluated at runtime and it can be seen as a function.
It is especially used for casts along the inheritance hierarchy.

Dynamic cast can performa a type checking:
I have a class Entity from which I derive two classes: Player and Enemy.
If I cast a Player into Entity dynamic_cast returns true
If I cast a Player into Enemy dynamic_cast returns false

*/

#include <iostream>
#include <string>

class Entity{
public: virtual void printName(){} // I added this line to make Entity a polimorphic class 
									// otherwise dynamic_cast won't work.
};

class Player : public Entity{};

class Enemy : public Entity{};

int main (){

	Player* player = new Player();
	Entity* actuallyPlayer = player; // Implicit cast
	Entity* actuallyEnemy = new Enemy();

	// Player* p = actuallyPlayer; // I need to cast because I don't know if its a player or an enemy
	// Player* p1 = actuallyEnemy; // I need to cast because I don't know if its a player or an enemy

	Player* p1 = (Player*)actuallyEnemy; // this works because the classes Playr and Enemy are identical, 
	if (p1)								// otherwise it won't work.
		std::cout << "p1-Success\n";    // but then I'll have a memory conflict because Player is not an Enemy
	else
		std::cout << "p1-Not-Success\n";
									  
	Player* p1_a = static_cast<Player*>(actuallyEnemy); // this works
	if (p1_a) // but then I'll have a memory conflict because Player is not an Enemy
		std::cout << "p1_a-Success\n";
	else
		std::cout << "p1_a-Not-Success\n";

	Player* p1_b = dynamic_cast<Player*>(actuallyEnemy); // this not work
	if (p1_b) // dynamic_cast says it can't convert an Enemy into Player
		std::cout << "p1_b-Success\n";
	else
		std::cout << "p1_b-Not-Success\n";

	Player* p1_c = dynamic_cast<Player*>(actuallyPlayer); // this works
	if (p1_c)
		std::cout << "p1_c-Success\n";
	else
		std::cout << "p1_c-Not-Success\n";

	// How dynamic_cast can know that the Entity that I have is a Player
	// and not an Enemy? Cpp is not a managed language as Java or C#.
	// dynamic_cast stores Run Time Type Information. So dynamic_cast takes more time 
	// because it store more infotmation and checks to see if the types are the same
	// at run time. For this reasons it is slower.

	// In Visual Studio you can disable Run Time Type Information.

	// For these reasons dynamic_cast is not so performing in execution time
	// as C style cast.

	return 0;
}

/*
Managed Languages vs Compiled Language difference?

The difference is not in "compiled" vs. "managed", these are two orthogonal axes. By "managed" they normally mean a presence of a garbage-collected memory management and/or a presence of a virtual machine infrastructure. Both has absolutely nothing to do with compilation and whatever people deem to be opposite to it.

All this "differences" are quite blurred, artificial and irrelevant, since it is always possible to mix managed and unmanaged memory in a single runtime, and a difference between compilation and interpretation is very vague too.

Python support Garbage Collection: it is Managed. Python and C are both compiled.
*/