#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    bool b = true;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (a[i] == a[j]) {
                b = false;
            }
        }
    }
    if (b==0) {
        cout << "yes";
    }
    else cout << "no";
}
