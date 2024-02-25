#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(true) {
        cin >> a;
        if(a== -1 ) {cout << "Bye"; break; }
        int b =  (a>0 && !(a%5))? a/5:-1;
        cout << b << endl;
    }
}
