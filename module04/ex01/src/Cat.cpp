#include "Cat.hpp"

Cat::Cat():Animal(){
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "🐱[Cat] is born with new brain!(default constructor) " << std::endl;
}

Cat::Cat(const Cat& other):Animal(other){
    this->brain = new Brain(*other.brain);
    std::cout << "🐱[Cat] is cloned with a Deep Copy of Brain! (copy constructor) " << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "🐱[Cat]Copy assignment operator called " << std::endl;
    if(this != &other){
        Animal::operator= (other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "🐱[Cat] Bye! destructor called and brain deleted! "<< std::endl;
}

void Cat::makeSound()const{
    std::cout << "🐱Miao! Miao!" << std::endl;
}