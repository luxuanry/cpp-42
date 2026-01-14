#include "ScavTrap.hpp"

int main(){
    ScavTrap robot("Robot");

    robot.attack("Dog");
    robot.guardGate();
    robot.takeDamage(30);
    robot.beRepaired(20);

    return 0;
}
