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
};#pragma once
#include <vector>
#include <string>
#include "Movie.h"

class MovieManager {
private:
    std::vector<Movie> movies;

public:
    void addMovie(const Movie& m);
    void printAll() const;
    Movie* findByTitle(std::string title);
    void sortByRating();
};