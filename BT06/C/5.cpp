#include <iostream>
using namespace std;
bool check(int num) {
if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;

}
void in(int a) {
for (int i = 2;i<a;i++ ) {
    if (check(i)) cout << i << ' ';
}

}
int main()
{
    int n;
    cin >> n;
    in(n);
}
