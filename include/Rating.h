#pragma once

class Rating {
private:
    int userId;
    int movieId;
    double score;

public:
    Rating(int uId, int mId, double s);
    double getScore() const;
};