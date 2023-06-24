#include<iostream>

void GetValue(const std::string& name)
{
    std::cout << "[lvalue]" << name << std::endl;
}

void GetValue(std::string&& name)
{
    std::cout << "[rvalue]" << name << std::endl;
}


int main()
{
    std::string firstName = "Yan";
    std::string lastName = "Chernikov";
    std::string fullName = firstName + lastName;
    GetValue(fullName);
    GetValue(firstName + lastName);
}