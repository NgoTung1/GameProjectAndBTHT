#include <bits/stdc++.h>
using namespace std;
struct String {
 int n;
 char* str;
 String (const char* s) {
     n = strlen(s);
 str = new char[n+1];
 strcpy(str,s);

 }
 ~String() {
 delete[] str;
 }
 void print() const{
 cout << str;
 }
 void append(const char* s) {
 int n1 = strlen(s);
 int n2 = strlen(str);
 char* st = new char[n1+n2+1];
 strcpy(st,str);
 strcpy(st+n2,s);
 delete[] str;
 str = st;
 n = n1 +n2;
 }



};
int main() {
 String str1("Hello");
 str1.append("There");
 str1.print();
 return 0;
 }
