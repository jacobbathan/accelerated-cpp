// ask for name, then greet

#include <iostream>
#include <string>

int main()
{
    // Ask for name
    std::cout << "Please enter name: ";

    // Read name
    std::string name; // defines name
    std::cin >> name; // reads into name

    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;  
}
