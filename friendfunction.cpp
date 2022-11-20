#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    void set(int r, int i)
    {
        real = r;
        img = i;
    }
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend complex operator+(complex x, complex y);
    void Display(complex y)
{

    cout << y.real << "+i" << y.img << endl;
}
};
complex operator+(complex x, complex y)
{
    complex z;
    z.real = x.real + y.real;
    z.img = x.img + y.img;
    return z;
}

int main()
{
    complex c1, c2, c3;
    c1.set(78, 9);
    c2.set(68, 9);
    c3 = c1 + c2;
    c1.Display(c3);

    return 0;
}