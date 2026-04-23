#ifndef MOVIEMANAGER_H
#define MOVIEMANAGER_H

#include <vector>
#include <string>
#include "Movie.h"

class MovieManager {
private:
    std::vector<Movie> movies; 

public:
    void addMovie(Movie m);              
    void printAll();                     
    Movie* findByTitle(std::string title); 
    void sortByRating();                 

#endif