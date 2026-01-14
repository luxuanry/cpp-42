#include "FragTrap.hpp"

int main(){
    FragTrap robot("Robot");

    robot.attack("Dog");
    robot.highFivesGuys();
    robot.takeDamage(50);
    robot.beRepaired(80);

    return 0;
}
