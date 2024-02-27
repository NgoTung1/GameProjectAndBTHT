#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int k(0);
    for (int i=0;i<n;i++) {
        for ( int j=0;j<n;j++) {
            a[i][j] = k+1;
            k++;
        }
        k = i+1;
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if(a[i][j] > 10 ) a[i][j] = a[i][j]- 10;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
