#include "Cat.hpp"

Cat::Cat():Animal(){
    this->type = "Cat";
    std::cout << "🐱[Cat] is born!(default constructor) " << std::endl;
}

Cat::Cat(const Cat& other):Animal(other){
    *this = other;
    std::cout << "🐱[Cat] is cloned! (copy constructor) " << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "🐱[Cat]Copy assignment operator called " << std::endl;
    if(this != &other){
        Animal::operator= (other);
        this->type = other.type;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "🐱[Cat] Bye! destructor called "<< std::endl;
}

void Cat::makeSound()const{
    std::cout << "🐱Miao! Miao!" << std::endl;
}