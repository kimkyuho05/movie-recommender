#include "User.h"
#include <iostream>

User::User(int id, std::string name, std::string email) 
    : id(id), name(name), email(email) {}

User::~User() {}

void User::display() const {
    std::cout << "User [" << id << "]: " << name << std::endl;
}

int User::getId() const { return id; }