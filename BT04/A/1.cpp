#include <iostream>
using namespace std;
int a[100];
int c[5] = {1,2,3,4};
//int c[3] = {1,2,3,4}
int e[] = {1,2,3,4};
int main()
{
    int b[10];
    int d[5] = {1,2,3,4};
    //int d[3] = {1,2,3,4};
    int f[] = {1,2,3,4};
    for (int i= 0;i<5;i++) {
        cout << c[i] << d[i] << e[i] << f[i];
    }

}
