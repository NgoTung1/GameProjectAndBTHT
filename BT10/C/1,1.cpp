#include <iostream>
#include <cstring>
using namespace std;

char* s(const char a[])
{
    int n = strlen(a);
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
