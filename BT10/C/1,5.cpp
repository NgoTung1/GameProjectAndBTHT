#include <iostream>
using namespace std;
char* truncate(const char a[], int n)
{
     int b = 0;
    while(a[b] != '\0') b++;
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

