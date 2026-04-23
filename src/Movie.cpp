#include "Movie.h"
#include <iostream>

Movie::Movie() : id(0), releaseYear(0), totalRating(0.0), ratingCount(0) {}

Movie::Movie(int id, const std::string& title, const std::string& genre, int year)
    : id(id), title(title), genre(genre), releaseYear(year), totalRating(0.0), ratingCount(0) {}

int Movie::getId() const { return id; }
std::string Movie::getTitle() const { return title; }

double Movie::getAverageRating() const {
    if (ratingCount == 0) return 0.0;
    return totalRating / ratingCount;
}

void Movie::addRating(double r) {
    if (r >= 0.0 && r <= 5.0) {
        ratingsList.push_back(r);
        totalRating += r;
        ratingCount++;
    }
}

void Movie::display() const {
    std::cout << id << ". " << title << " (" << releaseYear << ") 평점: " 
              << getAverageRating() << " (" << ratingCount << "건)" << std::endl;
}

void Movie::showAllRatings() const {
    std::cout << "--- [" << title << "] 평점 목록 ---" << std::endl;
    if (ratingsList.empty()) {
        std::cout << "등록된 평점이 없습니다." << std::endl;
        return;
    }
    for (int i = 0; i < (int)ratingsList.size(); i++) {
        std::cout << i + 1 << "번 평점: " << ratingsList[i] << "점" << std::endl;
    }
}

bool Movie::operator<(const Movie& other) const {
    return this->getAverageRating() > other.getAverageRating();
}