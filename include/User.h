#pragma once
#include <string>

class User {
private:
    int id;           
    std::string name;  
    std::string email; 

public:
    User(int id, std::string name, std::string email);
    void display() const;
    int getId() const { return id; }
    std::string getName() const { return name; }
    std::string getEmail() const { return email; }
};