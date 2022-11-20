#include <iostream>
using namespace std;
int g = 1000; // global varibale...
int *stat()
{
    static int a = 0;
    int *ptr = &a;
    a++;
    cout << "Static variable value  " << a << "And the address is "<<ptr<<endl;
    return ptr;
}
int add(int a, int b)
{

    return a + b;
}
int main()
{
    int g = 3000; // local variable...
    int *ptr = stat();
    cout << ptr << endl;
    int a = 7;
    int b = 9;
    cout << add(a, b);
    int *ptr2 = stat();
    cout << ptr2 << endl;
    cout << "The local g value " << g << endl
         << "The global g value " << ::g;
    cout << "ptr1 is " << ptr << "  And the second ptr is " << ptr2;
    return 0;
}