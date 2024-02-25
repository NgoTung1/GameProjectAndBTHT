#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    bool d(0);
    if ( (a<b && b <c) || (a>b && b > c)) d = true;
    cout << d;
}
