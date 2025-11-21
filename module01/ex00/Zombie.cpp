#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << GRAY << "[" << this->name << "]" << RESET << " Zombie has been created." << std::endl;
}

// Destructor
Zombie::~Zombie() {
    std::cout << GRAY << "[" << this->name << "]" << RESET << " is destroyed (memory cleaned up)." << std::endl;
}

// Announce
void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}