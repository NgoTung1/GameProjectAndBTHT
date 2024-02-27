#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    do {
        int n;
        cout << "Moi ban nhap so:";
        cin >> n;
        a=n;
        switch (a)
        {
        case 0:
            {
                cout << "Vưa nhap so 0"<<endl;
                break;
            }
            case 1:
            {
                cout << "Vưa nhap so 1"<<endl;
                break;
            }case 2:
            {
                cout << "Vưa nhap so 2"<<endl;
                break;
            }case 3:
            {
                cout << "Vưa nhap so 3"<<endl;
                break;
            }case 4:
            {
                cout << "Vưa nhap so 4"<<endl;
                break;
            }case 5:
            {
                cout << "Vưa nhap so 5"<<endl;
                break;
            }case 6:
            {
                cout << "Vua nhap so 6"<< endl;
                break;
            }case 7:
            {
                cout << "Vua nhap so 7"<<endl;
                break;
            }case 8:
            {
                cout << "Vua nhap so 8"<<endl;
                break;
            }case 9:
            {
                cout << "Vua nhap so 9"<<endl;
                break;
            }
        }
    }

    while(a>=0 && a<=9);
}
