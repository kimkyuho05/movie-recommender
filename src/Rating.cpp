#include "Rating.h"

Rating::Rating(int userId, int movieId, double score) 
    : userId(userId), movieId(movieId), score(score) {}

double Rating::getScore() const { return score; }