#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal(){
    this->type = "WrongCat";
    std::cout << "[WrongCat] is born!(default constructor) " << std::endl;
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal(other){
    *this = other;
    std::cout << "[WrongCat] is cloned! (copy constructor) " << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "[WrongCat]Copy assignment operator called " << std::endl;
    if(this != &other){
        WrongAnimal::operator= (other);
        this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "[WrongCat] Bye! destructor called "<< std::endl;
}

void WrongCat::makeSound()const{
    std::cout << "Wrong Miao Miao!" << std::endl;
}
