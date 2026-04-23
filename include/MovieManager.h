#pragma once
#include <vector>
#include <string>
#include "Movie.h"

class MovieManager {
private:
    std::vector<Movie> movies; 

public:
    void addMovie(Movie m);
    void printAll() const;
    Movie* findByTitle(std::string title);
    void sortByRating();
};