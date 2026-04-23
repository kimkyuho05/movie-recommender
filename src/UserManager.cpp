#include "UserManager.h"
#include <iostream>

void UserManager::addUser(const User& u) {
    users.push_back(u);
}

void UserManager::printAll() const {
    if (users.empty()) return;
    for (int i = 0; i < (int)users.size(); i++) {
        users[i].display();
    }
}

User* UserManager::findById(int id) {
    for (int i = 0; i < (int)users.size(); i++) {
        if (users[i].getId() == id) {
            return &users[i];
        }
    }
    return nullptr;
}