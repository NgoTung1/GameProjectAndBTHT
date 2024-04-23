#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    int sum(0);
    int c = b.length();
    while(c!=0) {
        int check = strcmp(a.c_str(),b.c_str());
    if(check == 0 ) sum ++;
    else b.pop_back();
      int  d = b.length();
    c = d;
    }
    cout << sum;
}
