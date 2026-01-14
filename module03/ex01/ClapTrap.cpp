#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Default"), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :_name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
    if(this != &other){
        this->_name = other._name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if(energyPoints > 0 && hitPoints > 0){
        energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if(hitPoints == 0){
        std::cout << "ClapTrap " << _name << " is already at 0 hit points!" << std::endl;
        return;
    }
    if(amount >= hitPoints){
        hitPoints = 0;
    }
    else{
        hitPoints -= amount;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(energyPoints > 0 && hitPoints > 0){
        energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points! " << std::endl;
    }
    else{
        std::cout << "ClapTrap " << _name << " has no energy or died, cannot be repaired!" << std::endl;
    }
}
