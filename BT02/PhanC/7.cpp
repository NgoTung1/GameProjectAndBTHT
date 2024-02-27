#include <iostream>
using namespace std;

int main() {
    long long int a = 9e9;
    while (true) {
        int n;
        cin >> n;
        int b = n;
        if (b == a) {
            continue;
        } else {
            cout << n << ' ';
        }
        a = b;
        if (n < 0) {
            break;
        }
    }
    return 0;
}

