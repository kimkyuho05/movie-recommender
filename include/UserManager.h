#pragma once
#include <vector>
#include <string>
#include "User.h"

class UserManager {
private:
    std::vector<User> users;

public:
    void addUser(const User& u);
    void printAll() const;
    User* findById(int id);
};