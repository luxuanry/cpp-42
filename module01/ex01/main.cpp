#include "Zombie.hpp"

// N defines the size of the zombie horde
#define HORDE_SIZE 10

int main() {
    // 1. Allocate the zombie horde on the heap using the single allocation function
    Zombie* zombieArmy = zombieHorde(HORDE_SIZE, "Horde_Minion");

    if (!zombieArmy) {
        std::cerr << "Failed to create zombie horde." << std::endl;
        return 1;
    }

    // Test the announce function for each zombie in the horde
    std::cout << MAGENTA << "\nAnnouncing the Horde" << RESET << std::endl;
    for (int i = 0; i < HORDE_SIZE; ++i) {
        // Access each zombie using array notation on the pointer
        std::cout << MAGENTA << "Minion " << i + 1 << ": " << RESET;
        zombieArmy[i].announce();
    }

    // 3. Cleanup: Deallocate the entire horde
    std::cout << MAGENTA << "\nDeallocating the entire Zombie Horde (using delete[])" << RESET << std::endl;
    
    // **CRITICAL:** Use delete[] to correctly call the destructor for ALL N objects
    // allocated by the single new[] call. Check the destruction messages!
    delete[] zombieArmy;

    std::cout << MAGENTA << "Deallocation Complete. Memory checked." << RESET << std::endl;
    
    return 0;
}