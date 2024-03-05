#include <bits/stdc++.h>
using namespace std;
struct rect{
int x, y, w, h;
};
struct ship {
    rect r;
     string id;
     int dx,dy;
     void move() {
      r.x += dx;
      r.y += dy;
     }

};
void display(const ship& ship ) {
cout << ship.r.x << ' ' << ship.r.y << ' ' << ship.r.w << ' ' << ship.r.h<< ' ';
cout << ship.id << endl;

}
int main() {
    ship ship1, ship2;
    cin >> ship1.r.x >> ship1.r.y >> ship1.r.w >> ship1.r.h;
    cin >> ship1.id >> ship1.dx >> ship1.dy;

    cin >> ship2.r.x >> ship2.r.y >> ship2.r.w >> ship2.r.h;
    cin >> ship2.id >> ship2.dx >> ship2.dy;

    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }

    return 0;
}

