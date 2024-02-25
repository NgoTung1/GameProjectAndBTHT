#include <bits/stdc++.h>
using namespace std;
int main() {
    string a = "a";
    string b = "b";
    string c;
  for (int i = 0;i<=10;i++) {
    if ( i==0) cout << 'a'<< endl;
    else if (i ==1) cout << 'b'<<endl;
     else { c = b + a;
    cout << c<<endl;
    a=b; b = c;
     }
  }
}
