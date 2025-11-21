#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    std::cout << YELLOW << ">>> [HEAP] Allocating memory and creating zombie... " << RESET;
    Zombie* zombie = new Zombie(name);
    std::cout << YELLOW << ">>> [HEAP] Memory allocated, returning pointer ('key')." << RESET << std::endl;
    return zombie;
}