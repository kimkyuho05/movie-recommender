#include <iostream>
#include <string>
#include "MovieManager.h"
#include "UserManager.h"
#include "Admin.h"

using namespace std;

int main() {
    MovieManager m_mgr;
    UserManager u_mgr;
    int menu;

    while (true) {
        cout << "\n1.영화추가 2.제목검색 3.전체출력 4.평점순정렬 5.유저추가 6.유저출력 7.평점입력 0.종료\n선택: ";
        cin >> menu;
        if (menu == 0) break;

        if (menu == 1) {
            int id, yr; string t, g;
            cout << "ID 제목 장르 년도: "; cin >> id; cin.ignore(); getline(cin, t); getline(cin, g); cin >> yr;
            m_mgr.addMovie(Movie(id, t, g, yr));
        } 
        else if (menu == 2) {
            string t; cout << "제목: "; cin.ignore(); getline(cin, t);
            Movie* m = m_mgr.findByTitle(t);
            if (m) m->display();
            else cout << "없음" << endl;
        }
        else if (menu == 3) m_mgr.printAll();
        else if (menu == 4) {
            m_mgr.sortByRating();
            m_mgr.printAll();
        }
        else if (menu == 5) {
            int id; string n, e;
            cout << "학번 이름 이메일: "; cin >> id; cin.ignore(); getline(cin, n); getline(cin, e);
            u_mgr.addUser(User(id, n, e));
        }
        else if (menu == 6) u_mgr.printAll();
        else if (menu == 7) {
            string t; double s;
            cout << "영화제목 평점: "; cin.ignore(); getline(cin, t); cin >> s;
            Movie* m = m_mgr.findByTitle(t);
            if (m) m->addRating(s);
        }
    }
    return 0;
}