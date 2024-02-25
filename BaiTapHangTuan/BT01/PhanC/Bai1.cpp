#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a[100];
    for (int i= 0;i<x;i++) {
        cin >> a[i];
    }
    int sum(0);
    for (int i= 0;i<x;i++) {
        sum+=  a[i];
    }
    sort(a,a+x);
    cout << sum/x << endl;
    cout << a[x-1] << endl;
    cout << a[0];
}
