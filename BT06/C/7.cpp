#include <iostream>
using namespace std;
void check(int a)
{
    for (int i=1;i<=a;i++)
    {
        for(int j =0;j<(a*2-i*2)/2;j++) {
            cout << ' ';
        }
        for (int j=0;j<i*2-1;j++) {
            cout <<'*';
                    }
        for (int j =0;j<(a*2-i*2)/2;j++) {
            cout << ' ';
        }
        cout << endl;
    }

}
int main()
{
    int m;
    cin >> m;
    check(m);
}
