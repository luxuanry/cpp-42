#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


#define RESET   "\033[0m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define MAGENTA "\033[35m" // Color for Zombie Horde (Array Allocation)
#define GRAY    "\033[90m"

// The Zombie class definition
class Zombie {
private:
    std::string name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void setName(std::string newName);

    // Member function to make the zombie announce itself
    void announce(void);
};

// Auxiliary function prototypes
// Allocates N Zombies in a single allocation on the heap.
Zombie* zombieHorde( int N, std::string name );

#endif