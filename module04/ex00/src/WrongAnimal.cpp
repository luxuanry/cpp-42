#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
    std::cout << "[WrongAnimal] Default constructor called" << std::endl;
    std::cout << "A generic Wrong animal is born!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal&other): type(other.type){
    std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "[WrongAnimal] Copy assignment operator called" << std::endl;
    if(this != &other){
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "[WrongAnimal] Destructor called" << std::endl;
    std::cout << "A Wrong animal has died." << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "Generic Wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->type;
}