#include "Contact.hpp"

Contact::Contact() {

}

Contact::~Contact() {

}

void Contact::setFirstName(std::string str) {
    this->firstName = str;
}

void Contact::setLastName(std::string str) {
    this->lastName = str;
}

void Contact::setNickname(std::string str) {
    this->nickname = str;
}

void Contact::setPhoneNumber(std::string str) {
    this->phoneNumber = str;
}

void Contact::setSecret(std::string str) {
    this->Secret = str;
}

std::string Contact::getFirstName() const {
    return this->firstName;
}

std::string Contact::getLastName() const {
    return this->lastName;
}

std::string Contact::getNickname() const {
    return this->nickname;
}

std::string Contact::getPhoneNumber() const {
    return this->phoneNumber;
}

std::string Contact::getSecret() const {
    return this->Secret;
}