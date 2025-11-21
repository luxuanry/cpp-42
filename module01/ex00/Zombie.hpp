#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define CYAN    "\033[36m"  // Color for Stack Allocation output
#define YELLOW  "\033[33m" // Color for Heap Allocation output
#define GRAY    "\033[90m" // Color for standard internal messages


class Zombie {
private:
    std::string name;

public:
   
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif