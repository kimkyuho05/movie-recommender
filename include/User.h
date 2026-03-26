#pragma once
#include <string>

class User {
private:
    int id;
    std::string name;
    std::string email;

public:
    User(int id, std::string name, std::string email);
    int getId() const;
    void display() const;
};