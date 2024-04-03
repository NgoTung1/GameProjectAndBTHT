#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    int a[3];
    char b[4];
    int d;
    for (int i=0;i<3;i++) {
        cout << (void*)&a[i] << ' ' << (void*)&b[i] << endl;
        // địa chỉ các ô cách nhau theo cách đơn vị của biến
    }
    cout << &x<< endl;
    cout << &y << endl;
    cout << &d << endl;
    // vị trí tương đối của các biến sẽ tùy thuộc vào trình biên dịch và hệ thống
}
