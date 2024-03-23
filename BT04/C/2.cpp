#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int b = a.length();
    bool c = true;
    for (int i= 0;i<b;i++) {
        if (a[i] != a[b-i-1]) c = false;
    }
    if (c == 0) cout << "no";
    else cout << "yes";
}
