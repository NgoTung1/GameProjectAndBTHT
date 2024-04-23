#include <iostream>
using namespace std;
int main()
{
    int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p;// con trỏ trở thành null
*p2 = 100; // sai vì p2 trỏ đến con trỏ p mà con trỏ p lúc này đã trở thành null nên gán p2 bằng 100 sẽ không đúng
 cout << *p2;
 delete p2;

}
