#include <iostream>
#include "Movie.h"
#include "User.h"
#include "Rating.h"

using namespace std;

int main() {
    User kyuho(20253363, "김규호", "kyuho05@ssu.ac.kr");
    kyuho.display();

    Movie m(1, "기생충", "드라마", 2019);
    
    Rating r(kyuho.getId(), m.getId(), 4.5);
    m.addRating(r.getScore());

    cout << endl;
    m.display();

    return 0;
}