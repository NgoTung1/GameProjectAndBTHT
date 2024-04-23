#include <iostream>
using namespace std;
void count_even(int *a,int b)
{
    for (int i =0;i<b;i++) {
        if(*(a+i) %2 == 0) {
            cout << *(a+i) << ' ';
        }
    }
}
int main()
{
    int a;
    cin >> a;
    int b[100];
    for (int i= 0;i<a;i++) {
        cin >> b[i];
    }
    count_even(b,a);
}
