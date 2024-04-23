#include <iostream>
using namespace std;

int check(int* a, int size)
{
    return size;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b = sizeof(a) / sizeof(a[0]);
    cout << b << ' ' << check(a, b);

    return 0;
}
