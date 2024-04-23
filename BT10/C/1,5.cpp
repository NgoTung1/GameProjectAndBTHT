#include <iostream>
#include <cstring>
using namespace std;
char* truncate(const char a[], int n)
{
    int b= strlen(a);
    if ( b<n) return 0;
    else {
        char* s= new char[n+1];
        for (int i= 0;i<n;i++)
        *(s+i) = a[i];
        return s;
    }
}
int main()
{
    char a[] = "hellllo";
    int n = 5;
    char* c = truncate(a,n);
    cout << c;
}

