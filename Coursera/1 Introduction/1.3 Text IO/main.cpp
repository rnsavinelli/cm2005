#include <iostream>

int main(void) {
    std::string name;

    std::cout << "What is your name?" << std::endl;
 
    std::cin >> name;

    std::cout << "Hello " << name << std::endl;

    return 0;
}
