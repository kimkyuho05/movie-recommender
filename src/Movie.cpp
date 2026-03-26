#include "Movie.h"
#include <iostream>


Movie::Movie() 
    : id(0), title(""), genre(""), director(""), year(0), totalRating(0.0), ratingCount(0) {}


Movie::Movie(int id, std::string title, std::string genre, std::string director, int year)
    : id(id), title(title), genre(genre), director(director), year(year), totalRating(0.0), ratingCount(0) {}


void Movie::addRating(double score) {
    totalRating += score;
    ratingCount++;
}

double Movie::getAverageRating() const {
    if (ratingCount == 0) return 0.0; 
    return totalRating / ratingCount;
}

void Movie::display() const {
    std::cout << "[" << id << "] " << title << " (" << year << ") - " 
              << genre << " | " << director << " | 평점: " << getAverageRating() << "/5.0" << std::endl;
}