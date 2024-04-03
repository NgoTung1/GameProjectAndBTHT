#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int &ref = a;


    cout << "a = " << a << endl;
   cout << "ref = " << ref <<endl;


    ref = 10;

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    // 1. Biến tham chiếu và biến mà nó chiếu tới là cùng một biến trong bộ nhớ.
    // 2. Không thể khai báo một tham chiếu mà chưa chiếu ngay nó tới một biến thường.
    // 3. Không thể chiếu một tham chiếu tới một biến khác với đích ban đầu của nó.

    return 0;
}

