// ask for a person's name, and greet the person
#include <iostream>
#include <string>

int main()
{
    // ask for the person's names
    std::cout << "Please enter your first name: ";
    
    // read the name
    std::string name;
    std::cin >> name;
    
    // write a greeting
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}