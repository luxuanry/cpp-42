#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name){
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other){
    *this = other;
    std::cout << "ScavTrap copy constrcutor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    if(this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}


void ScavTrap::attack(const std::string& target){
    if(energyPoints > 0 && hitPoints > 0)
    {
        energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}