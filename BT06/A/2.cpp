#include <iostream>
using namespace std;
int factorial(int n) {
 cout << "x=" <<  n <<  ' ' << &n << endl;
if (n == 0) return 1;
else return n*factorial(n-1);

}
int main() {
    int N = 5; // Hardcode gia tri cua N
    unsigned long long result = factorial(N);

    return 0;
}
// các giá trị sẽ được gọi liên tục trong hàm
// kích thước của 1 stack frame
