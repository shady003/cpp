#include <iostream>
using namespace std;
// This function has return type address (pointer)...
int* heapmemory(int s)
{
    int *p;
    p = new int(s);
    for (int i = 0; i < s; i++)
        p[i] = i + 1;
    return p;
}
int main()
{
    int *ptr;
    ptr = heapmemory(5);
    cout << ptr[2];
    return 0;
}