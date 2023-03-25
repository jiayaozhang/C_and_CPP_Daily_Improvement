#include <iostream>
#include <string>

class Entity{
	private:
		int m_X, m_Y;
		int* m_P;
		int* C, D; // here C is a pointerm D is an integer
		int* A, *B; // here A and B are both pointers
		mutable int var; /* Mutable let you modify a variable inside const method of const functins */

	public:
		int GetX() const { // const here indicates that this method 
						   // won't be able to modify the class
			// m_X = 2; // I'm not allowed to do this
			var = 2; // I can modify var it is mutable
			return m_X;
		}

		const int* const GetP() const{ 
			/* 1st const means that the pointer contents can't be modified
				2nd const means that the pointer can't be modified
				3rd const means that the method won't modify the class
			*/
			return m_P;
		}

		void SetX(int x){
			m_X = x;
		}
};

void PrintEntity(const Entity& e){ /* I don't want to copy the Entity class in PrintEntity, 
									I just want to pass its reference to PrintEntity class 
									Because I put const I can't modify e 
									*/
	std::cout << e.GetX() << std::endl;
};

int main (){

	Entity e;

	return 0;
}