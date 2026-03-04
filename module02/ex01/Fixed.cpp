#include "Fixed.hpp"

Fixed:: Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed:: Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this-> _fixedPointValue = n << _numberOfFractionalBits;
}

Fixed:: Fixed(const float f){
    std::cout << "Float constructor called" << std::endl;
    this-> _fixedPointValue = roundf(f *(1 << _numberOfFractionalBits));
}

Fixed:: Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if( this != &other){
        this->_fixedPointValue = other.getRawBits();
    }
    return *this;
}

Fixed:: ~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed:: getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed:: setRawBits(int const raw){
    this->_fixedPointValue = raw;
}

float Fixed:: toFloat(void) const{
    return (float)this->_fixedPointValue / (1 << _numberOfFractionalBits);
}

int Fixed:: toInt(void) const{
    return this->_fixedPointValue >> _numberOfFractionalBits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i) {
    o << i.toFloat();
    return o;
}