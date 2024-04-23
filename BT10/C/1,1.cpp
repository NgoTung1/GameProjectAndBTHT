#include <iostream>
using namespace std;

char* s(const char a[])
{
    int n = 0;
    while(a[n] != '\0') n++;
    char* s = new char[n+1];
    for (int i=0;i<n;i++) {
        *(s+i) = a[n-i-1];
    }
    return s;

}
int main()
{
    char a[] = "hello";
    char*b = s(a);
    cout << b;
}
