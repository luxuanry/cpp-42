#include "Dog.hpp"

Dog::Dog():Animal(){
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "🐶[Dog] is born with new brain!(default constructor) " << std::endl;
}

Dog::Dog(const Dog& other):Animal(other){
    this->brain = new Brain(*other.brain);
    std::cout << "🐶[Dog] is cloned with a Deep Copy of Brain! (copy constructor) " << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "🐶[Dog]Copy assignment operator called " << std::endl;
    if(this != &other){
        Animal::operator= (other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "🐶[Dog] Bye! destructor called and brain deleted! "<< std::endl;
}

void Dog::makeSound()const{
    std::cout << "🐶Woof! Woof!" << std::endl;
}