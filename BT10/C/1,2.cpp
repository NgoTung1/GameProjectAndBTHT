#include <iostream>
#include <cstring>
using namespace std;
char* s(const char a[], char c)
{
    int n = strlen(a);
    int j=0;
    char *s = new char[n+1];
    for (int i= 0;i<n;i++)
    {
        if(a[i] != c) {
            *(s+j) = a[j];
            j++;
        }
    }
    *(s+j) = '\0';
    return s;
}
int main()
{
    char a[] = "hell";
    char* b = s(a,'l');
    cout << b;
}
