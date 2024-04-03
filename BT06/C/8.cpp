#include <iostream>
#include <math.h>
using namespace std;
int rnd(double a) {
double b = ceil(a);
return b;

}
int main()
{
    double a;
    cin >> a;
    cout << rnd(a);
}
