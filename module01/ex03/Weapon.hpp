#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
private:
    std::string type;

public:
    Weapon(std::string initial_type);
    ~Weapon(void);
    const std::string& getType(void) const;
    void setType(std::string new_Type);

};

#endif