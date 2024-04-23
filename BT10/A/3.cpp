#include <iostream>
using namespace std;
int main()
{
    char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;
cerr << "a after deleting c:" << "-" << a << "-" << endl;
// lỗi ở đây là vì việc delete c là sai do c không được cấp phát động, nên sẽ xóa đi 1 giá trị không xác định, mà ở đây là a( gợi ý của cô)
}
