#include <iostream>
#include <string>
using namespace std;
void in(string a)
{
   cout << &a<<endl;

}
void in1(int b[])
{
    cout << &b<<endl;
}
int main()
{
    string a;
    int b[10];
    cout << &a<< endl;
    cout << &b << endl;
    in(a);
    in1(b);
    //cả mảng và string đều truyền tham trị
}
