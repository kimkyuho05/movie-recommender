#include "Rating.h"
#include <iostream>

Rating::Rating(int uId, int mId, double s) : userId(uId), movieId(mId) {
    
    if (s < 0.0) {
        std::cout << "[시스템] 경고: 평점은 0보다 작을 수 없습니다. 0.0으로 설정합니다." << std::endl;
        score = 0.0;
    } else if (s > 5.0) {
        std::cout << "[시스템] 경고: 평점은 5보다 클 수 없습니다. 5.0으로 설정합니다." << std::endl;
        score = 5.0;
    } else {
        score = s;
    }
}

void Rating::display() const {
    std::cout << "Rating -> User: " << userId << ", Movie: " << movieId << ", Score: " << score << std::endl;
}