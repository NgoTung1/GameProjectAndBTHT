#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    char a[100][100];
    for (int i =0;i<m;i++) {
        for (int j = 0;j<n;j++) {
            cin >> a[i][j];
        }
    }
    char b[100][100];
    for (int i=0;i<m;i++) {
        for (int j=0;jn;j++) {
            if(a[i][j] == '*') {
                    b[i][j] == '*';

            }
            else {
                    b[i][j] == 0;

            }
        }
    }
    for (int i= 0;i<m;i++) {
        for (int j=0;j<n;j++) {
            if(b[i][j] == '*') {
                b[i][j+1] ++; b[i][j-1] ++; b[]
            }
        }
    }
}
