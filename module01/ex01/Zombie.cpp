#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = "Unnamed Horde Member";
    std::cout << GRAY << "[" << this->name << "]" << RESET << " Default Zombie has been created." << std::endl;
}

//Constructor
Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << GRAY << "[" << this->name << "]" << RESET << " Parameterized Zombie has been created." << std::endl;
}
// Destructor
Zombie::~Zombie() {
    // Print destruction message
    std::cout << GRAY << "[" << this->name << "]" << RESET << " is destroyed (memory cleaned up)." << std::endl;
}

// Setter implementation (The linker is looking for this!)
void Zombie::setName(std::string newName) {
    this->name = newName;
}

// Announce function implementation (The linker is looking for this!)
void Zombie::announce(void) {
    // Print the required format: <name>: BraiiiiiiinnnzzzZ...
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}