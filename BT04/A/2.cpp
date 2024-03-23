#include <iostream>
#include <cstring>
char a[10];
//char c[4] = "abcd";
char e[] = "abcd";
using namespace std;
int main() {
   char a[10];
   char d[5] = "abcd";
   char e[] = "abcd";
   for (int i= 0;i<5;i++) {
    cout <<  d[i] << e[i];
   }
   cout << sizeof(e);



}
