#include "MovieManager.h"
#include <iostream>
#include <algorithm>

void MovieManager::addMovie(const Movie& m) {
    movies.push_back(m);
}

void MovieManager::printAll() const {
    if (movies.empty()) {
        return;
    }
    for (int i = 0; i < (int)movies.size(); i++) {
        movies[i].display();
    }
}

Movie* MovieManager::findByTitle(std::string title) {
    for (int i = 0; i < (int)movies.size(); i++) {
        if (movies[i].getTitle() == title) {
            return &movies[i];
        }
    }
    return nullptr;
}

void MovieManager::sortByRating() {
    std::sort(movies.begin(), movies.end());
}