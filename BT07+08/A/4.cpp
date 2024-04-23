#include <bits/stdc++.h>
using namespace std;
int check(int*a,int l,int r,int x)
{
    if (r>=l) {
    int mid = l+ (r-l)/2;
    if(*(a+mid) == x) return x;
    if (*(a+mid) < x) return check(a,mid+1,r,x);
    if (*(a+mid) >x) return check(a,l,mid-1,x);


    }
    return -1;
}
int main()
{
    int b;
    cin >> b;
    int a[100];
    for (int i=0;i<b;i++) {
        cin >> a[i];
    }
    sort(a,a+b);
    int x;
    cin >> x;
    int chec = check(a,0,b,x);
    if (chec != -1) cout << "yeah";
    else cout << "no";
}
