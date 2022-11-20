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
    int getReal(){
        return real ;
    }
    int getImg(){
        return img ;
    }
    friend complex operator+(complex x, complex y);
    friend int Display(complex y);
    
};
/*freind functions of complex*/
complex operator+(complex x, complex y)
{
    complex z;
    z.real = x.getReal() + y.getReal();
    z.img = x.getImg() + y.getImg();
    return z;
}
void Display(complex y)
{

    cout << y.getReal()<< "+i" << y.getImg() << endl;
  //  return 0;
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