#pragma once
#include "User.h"

class Admin : public User {
public:
    Admin(int id, std::string name, std::string email) 
        : User(id, name, email) {}

    void display() const {
        std::cout << "[Admin] " << name << " (ID: " << id << ")" << std::endl;
    }
};