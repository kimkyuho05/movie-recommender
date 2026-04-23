#pragma once
#include <string>
#include <vector>

class Movie {
private:
    int id;
    std::string title;
    std::string genre;
    int releaseYear;
    double totalRating;
    int ratingCount;
    std::vector<double> ratingsList;

public:
    Movie();
    Movie(int id, const std::string& title, const std::string& genre, int year);
    int getId() const;
    std::string getTitle() const;
    double getAverageRating() const;
    void addRating(double r);
    void display() const;
    void showAllRatings() const;
    bool operator<(const Movie& other) const;
};