#include <iostream>
using namespace std;
char* trim_right(const char a[])
{
    int b = 0;
    while(a[b] != '\0') b++;
    int cnt(0);
    for (int i= 0;i<b;i++)
    {
        if(a[i] == ' ') {
            cnt++;
        }
    }
    char* s = new char[b-cnt+1];
    for (int i= 0;i<b-cnt+1;i++) {
        *(s+i) = a[i];
    }
    s[b-cnt] = '\0';
    return s;
}
int main()
{
    char a[] = "hellllo    ";
    char* c = trim_right(a);

    cout << c;
    delete[] c;
}
