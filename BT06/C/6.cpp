#include <iostream>
using namespace std;
int dequy(int a, int b)
{
    if ( b== 0) return a;
     else return dequy(b,a%b);
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << dequy(a,b);
}
