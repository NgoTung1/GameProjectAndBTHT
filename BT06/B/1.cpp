#include <iostream>
using namespace std;
bool majority(bool a,bool b,bool c)
{
    return (a+b+c) >=2;


}
int main()
{
    bool a = 1;
    bool b = 1;
    bool c = 0;
    cout << majority(a,b,c);

}

