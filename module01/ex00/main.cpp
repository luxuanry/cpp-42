#include "Zombie.hpp"

int main() {
    std::cout << CYAN << "\n==========================================================================" << RESET << std::endl;
    std::cout << CYAN << "--- Testing randomChump (Stack Zombie / Automatic Cleanup - CYAN) ---" << RESET << std::endl;
    std::cout << CYAN << "==========================================================================" << RESET << std::endl;

    randomChump("Stack_Zombie_01");
    std::cout << CYAN << "--- randomChump demonstration finished ---" << RESET << std::endl;

    std::cout << YELLOW << "\n==========================================================================" << RESET << std::endl;
    std::cout << YELLOW << "--- Testing newZombie (Heap Zombie / Manual Cleanup - YELLOW) ---" << RESET << std::endl;
    std::cout << YELLOW << "==========================================================================" << RESET << std::endl;

    Zombie* heapZombie = newZombie("Heap_Zombie_02");
    std::cout << YELLOW << ">>> [HEAP OPERATION] Using the pointer ('key') to make the zombie announce: " << RESET;
    // Use the pointer to call the announce function
    heapZombie->announce();

    std::cout << YELLOW << ">>> [HEAP OPERATION] Heap zombie finished its work. Now manually cleaning up..." << RESET << std::endl;
    delete heapZombie; 
    std::cout << YELLOW << "--- Manual cleanup complete ---" << RESET << std::endl;

    return 0;
}