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
};#pragma once
#include <string>
#include <iostream>

class User {
protected:
    int id;
    std::string name;
    std::string email;

public:
    User(int id, std::string name, std::string email);

    virtual ~User();

    virtual void display() const;
    
    int getId() const;
};