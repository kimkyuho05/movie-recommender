#pragma once
#include <string>

class Movie {
private:
    int id;
    std::string title;
    std::string genre;
    std::string director;
    int year;
    double totalRating; 
    int ratingCount;    

public:
    Movie(); 
    Movie(int id, std::string title, std::string genre, std::string director, int year);
    void addRating(double score);     
    double getAverageRating() const; 
    void display() const;            
    int getId() const { return id; }
    std::string getTitle() const { return title; }
};