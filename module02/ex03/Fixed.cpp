#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed(const int n) {
    _fixedPointValue = n << _numberOfFractionalBits;
}

Fixed::Fixed(const float f){
    _fixedPointValue = roundf(f * (1 << _numberOfFractionalBits));
}

Fixed::Fixed(const Fixed& other) {
    _fixedPointValue = other._fixedPointValue;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        _fixedPointValue = other._fixedPointValue;
    }
    return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const {
    return _fixedPointValue;
}
void Fixed::setRawBits(int const raw) {
    _fixedPointValue = raw;
}
float Fixed::toFloat(void) const {
    return static_cast<float>(_fixedPointValue) / (1 << _numberOfFractionalBits);
}
int Fixed::toInt(void) const {
    return _fixedPointValue >> _numberOfFractionalBits;
}

std::ostream& operator<<(std::ostream & o, Fixed const & i) {
    o << i.toFloat();
    return o;
}

bool Fixed::operator>(const Fixed& other) const {
    return _fixedPointValue > other._fixedPointValue;
}
bool Fixed::operator<(const Fixed& other) const {
    return _fixedPointValue < other._fixedPointValue;
}
bool Fixed::operator>=(const Fixed& other) const {
    return _fixedPointValue >= other._fixedPointValue;
}
bool Fixed::operator<=(const Fixed& other) const {
    return _fixedPointValue <= other._fixedPointValue;
}
bool Fixed::operator==(const Fixed& other) const {
    return _fixedPointValue == other._fixedPointValue;
}
bool Fixed::operator!=(const Fixed& other) const {
    return _fixedPointValue != other._fixedPointValue;
} 
Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat());
}
Fixed& Fixed::operator++() {
    _fixedPointValue++;
    return *this;
}
Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    _fixedPointValue++;
    return temp;
}
Fixed& Fixed::operator--() {
    _fixedPointValue--;
    return *this;
}
Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    _fixedPointValue--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return (a < b) ? a : b; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return (a > b) ? a : b; }