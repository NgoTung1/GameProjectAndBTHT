#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        for (int j=n;j>1;j--) {
            if(i>=j) cout << '*';
            else cout << ' ';
        }
        cout << '*';
        for (int k=1;k<n;k++) {
            if(i>k) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
}
