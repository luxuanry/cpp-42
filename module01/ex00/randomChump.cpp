#include "Zombie.hpp"

// This function creates a temporary Zombie object on the STACK.
void randomChump(std::string name) {
    std::cout << CYAN << ">>> [STACK] Creating zombie (automatic cleanup)... " << RESET;
    Zombie randomZombie(name); 

    std::cout << CYAN << ">>> [STACK] Zombie announces: " << RESET;
    randomZombie.announce();
    std::cout << CYAN << ">>> [STACK] Stack zombie automatically destroyed." << RESET << std::endl;
}