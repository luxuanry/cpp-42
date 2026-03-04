#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const int count = 4;
    Animal* animals[count];

    std::cout << "\n Dog class" << std::endl;
    for (int i = 0; i < count / 2; i++) {
        animals[i] = new Dog();
    }
    std::cout << "\n Cat class" << std::endl;
    for (int i = count / 2; i < count; i++) {
        animals[i] = new Cat();
    }
    std::cout << "\n Delete Array" << std::endl;
    for (int i = 0; i < count; i++) {
        delete animals[i];
    }

    std::cout << "\n check deep copy " << std::endl;
    Dog* dogA = new Dog();
    std::cout << "\n Create Copy (Dog B)" << std::endl;
    Dog* dogB = new Dog(*dogA);
    std::cout << "\n Check Dog B" << std::endl;
    dogB->makeSound();
    std::cout << "\n Delete Copy (Dog B)" << std::endl;
    delete dogB;
    
    // std::cout << "\n check shallow copy " << std::endl;
    // Dog* dogA = new Dog();
    // {
    //     Dog dogB = *dogA; 
    //     std::cout << "Dog B is about to die..." << std::endl;
    // } 
    // std::cout << "Dog A is about to die..." << std::endl;
    // delete dogA; 
    return 0;
}

