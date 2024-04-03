#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
void check(int n[],int b) {
srand(time(0));
for (int i =0;i<3;i++) {
    n[i] = rand() %50;
}
}
void in(int n[],int m) {
for (int i= 0;i<m-2;i++) {
for (int j = 0;j<m-1;j++){
  for (int k= 0;k<m;k++) {
    if ((n[i] +n[j] + n[k])%25 == 0) cout << n[i] << ' ' << n[j] << ' ' << n[k] << endl;
  }
}
}
}
int main()
{
    int a;
    cin >> a;
    int b[a];
    check(b,a);
    in(b,a);
}
