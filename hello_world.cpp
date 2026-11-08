#include <iostream>

// Program entry point
int main() {
    std::string name; // Stores the user's name

    std::cout << "Enter your name: ";
    std::cin >> name;

    // Print personalized greeting
    std::cout << "Hello world from @" << name << std::endl;

    return 0;
}