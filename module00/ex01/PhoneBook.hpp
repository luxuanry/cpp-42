#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;
    int oldestIndex;

    std::string truncate(std::string str) const;
    void displayContactTable() const;
    void displayContactDetails(int index) const;

public:
    PhoneBook();
    ~PhoneBook();
    
    void addContact();
    void searchContact();
};

#endif