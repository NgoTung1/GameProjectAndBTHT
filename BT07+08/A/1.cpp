/*
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int *px = &x;
    printf("%d\n",px);
    printf("%d\n",*px);
    *px = 0;
    return 0;
}
*/
#include <iostream>
using namespace std;
int weird_sum(int a,int b) {
    int c;
    c = a+b;
    return c;
    }
int main()
{
int a,b;
cin >> a >> b;
cout << weird_sum(a,b);
}
