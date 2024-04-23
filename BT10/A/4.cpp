#include <iostream>
using namespace std;
int main()
{
    int a= 100;
    int *b = &a;
    delete b;
    return 0;
    // sau khi xóa, đia chỉ của a la biến địa phương đã bị xóa đi khỏi hàm main, nhưng b vẫn tiếp tục trỏ đến địa chỉ đó, nên dẫn đến lỗi truy cập bộ nhớ ko hợp lệ
}
