#include "User.h"
#include <iostream>

User::User(int id, std::string name, std::string email) 
    : id(id), name(name), email(email) {}

void User::display() const {
    std::cout << "User [" << id << "]: " << name << " (" << email << ")" << std::endl;
}