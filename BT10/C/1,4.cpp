#include <iostream>
using namespace std;
char* pad_left(const char a[],int n)
{
     int b = 0;
    while(a[b] != '\0') b++;
    if(b>n) return 0;
    else {
        char* s = new char[n+1];
        for (int i = 0;i<n-b;i++) *(s+i) = ' ';
        for (int i=b;i<n;i++) *(s+i) = a[i-b];
        *(s+n) = '\0';
        return s;
    }
}
int main()
{
    char a[] = "helo";
    int n = 8;
    char* c = pad_left(a,n);
    cout << c;
}

