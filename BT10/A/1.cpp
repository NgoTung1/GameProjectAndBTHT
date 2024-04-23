#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* char1, const char* char2)
{
    int n = strlen(char1) + strlen(char2);
    char* result = new char[n+1];
    strcpy(result,char1);
    strcat(result,char2);
    return result;
}
int main()
{
    const char* char1 = "hello";
    const char* char2 = "world";
    char* s = concat(char1,char2);
    cout << s;
    delete[] s;
}
