#pragma once
#include <string>

class Movie {
private:
    int id;
    std::string title;
    std::string genre;
    int releaseYear;
    double totalRating;
    int ratingCount;

public:
    Movie();
    Movie(int id, const std::string& title, const std::string& genre, int year);

    int getId() const;
    std::string getTitle() const;
    double getAverageRating() const;

    void addRating(double r);
    void display() const;
    
    bool operator<(const Movie& other) const;
};