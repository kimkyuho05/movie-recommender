#include <iostream>
#include "Movie.h"
#include "User.h"
#include "Rating.h"

using namespace std;

int main() {
    
    User kyuho(20253363, "김규호", "kyuho05@ssu.ac.kr");
    Movie m(1, "기생충", "드라마", "봉준호", 2019);

    
    kyuho.display();
    m.display();

    
    Rating r(kyuho.getId(), m.getId(), 6.0);
    m.addRating(r.getScore());

    cout << endl; 
    m.display();

    return 0;
}