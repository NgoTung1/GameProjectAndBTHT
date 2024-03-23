#include <iostream>
#include <string>
using namespace std;
bool check(int n) {
string a= "";
int b = n;
while (b >0) {
    int c = b%10;
    a.push_back(c);
    b/=10;
}
int d = a.length();
for (int i= 0;i<d;i++) {
    if (a[i] != a[d-i-1]) return false;
}
return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        int a;
        int b;
        cin >> a >> b;
        int cnt(0);
        for (int i= a;i<=b;i++) {
        if(check(i) == 1) cnt++;
        }
        cout << cnt;
    }
}
