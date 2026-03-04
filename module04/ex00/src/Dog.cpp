#include "Dog.hpp"

Dog::Dog():Animal(){
    this->type = "Dog";
    std::cout << "🐶[Dog] is born!(default constructor) " << std::endl;
}

Dog::Dog(const Dog& other):Animal(other){
    *this = other;
    std::cout << "🐶[Dog] is cloned! (copy constructor) " << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "🐶[Dog]Copy assignment operator called " << std::endl;
    if(this != &other){
        Animal::operator= (other);
        this->type = other.type;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "🐶[Dog] Bye! destructor called "<< std::endl;
}

void Dog::makeSound()const{
    std::cout << "🐶Woof! Woof!" << std::endl;
}