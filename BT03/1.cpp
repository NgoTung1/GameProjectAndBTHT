#include <bits/stdc++.h>
using namespace std;
struct point{
int x,y;
};
struct rect {
int x, y,w,h;
bool contains(const point& a) const {
    return a.x>=x && a.x<=x+w && a.y>= y && a.y <= x+h;
    }
};
int main() {
 rect a;
    cin >> a.x >> a.y >> a.w >> a.h;
 point b;
 cin >> b.x >> b.y;
 cout << a.contains(b);
}
