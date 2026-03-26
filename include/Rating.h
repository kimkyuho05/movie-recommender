#pragma once

class Rating {
private:
    int userId;   
    int movieId;  
    double score; 
public:
    Rating(int uId, int mId, double s);
    void display() const;
    int getUserId() const { return userId; }
    int getMovieId() const { return movieId; }
    double getScore() const { return score; }
};