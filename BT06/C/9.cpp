#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int randn(int n)
{
    srand(time(0));
    return rand()%n;
}
int main()
{
    int n;
    cin >> n;
    cout << randn(n);
}
