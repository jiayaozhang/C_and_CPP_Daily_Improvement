/*
OPERATORS AND OPERATORS OVERLOADING
Matemathical operators: + - / * 
Other operators: new delete m () >> -> &

OPERATORS OVERLOADING: you can define or change the behaviour of an operator 
in your program. Java doesn't have operators overloading, a part of C# has it
*/

#include <iostream>
#include <string>

struct Vector2{
	float x,y;

	Vector2(float x, float y)
		: x(x), y(y) {}

	Vector2 Add(const Vector2& other) const{ 
	// First const we can't modify the input vector
	// Second const we can't modify float x,y;
		return Vector2( x + other.x, y + other.y);
	}

	Vector2 operator+(const Vector2& other) const{
	// First const we can't modify the input vector
	// Second const we can't modify float x,y;
		return Add(other);
	}

	Vector2 Multiply(const Vector2& other) const{ 

		return Vector2( x * other.x, y * other.y);
	}

	Vector2 operator*(const Vector2& other) const{

		return Multiply(other);
	}

};

int main(){

	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerUp(1.1f, 1.1f);

	Vector2 result = position.Add(speed);
	std::cout << result.x << ", " << result.y << std::endl;

	Vector2 result1 = position.Add(speed.Multiply(powerUp));
	std::cout << result1.x << ", " << result1.y << std::endl;

	Vector2 result2 = position + speed * powerUp;
	std::cout << result2.x << ", " << result2.y << std::endl;

	return 0;
}