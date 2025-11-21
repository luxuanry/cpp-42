#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
    this->contactCount = 0;
    this->oldestIndex = 0;
}

PhoneBook::~PhoneBook() {
}

std::string PhoneBook::truncate(std::string str) const {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::displayContactTable() const {
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    
    for (int i = 0; i < this->contactCount; i++) {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getNickname()) << std::endl;
    }
}

void PhoneBook::displayContactDetails(int index) const {
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Secret: " << contacts[index].getSecret() << std::endl;
}


void PhoneBook::addContact() {
    std::string input;
    
    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    contacts[oldestIndex].setFirstName(input);
    
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    contacts[oldestIndex].setLastName(input);
    
    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    contacts[oldestIndex].setNickname(input);
    
    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    contacts[oldestIndex].setPhoneNumber(input);
    
    std::cout << "Enter secret: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    contacts[oldestIndex].setSecret(input);
    
    std::cout << "Contact added successfully!" << std::endl;
    
    oldestIndex = (oldestIndex + 1) % 8;
    if (contactCount < 8)
        contactCount++;
}

void PhoneBook::searchContact() {
    if (contactCount == 0) {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }
    
    displayContactTable();
    
    std::cout << "Enter index to display: ";
    std::string input;
    std::getline(std::cin, input);

    if (input.length() != 1 || !isdigit(input[0])) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    
    int index = input[0] - '0';
    
    if (index < 0 || index >= contactCount) {
        std::cout << "Index out of range!" << std::endl;
        return;
    }
    
    displayContactDetails(index);
}