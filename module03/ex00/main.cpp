#include "ClapTrap.hpp"

int main(){
    ClapTrap robot1("Robot1");
    ClapTrap robot2("Robot2");

    robot1.attack("Robot2");
    robot2.takeDamage(5);
    robot2.beRepaired(3);
    robot2.attack("Robot1");
    robot1.takeDamage(7);
    robot1.beRepaired(4);

    for (int i = 0; i < 11; i++){
        robot1.attack("Target");
    }
    return 0;
}