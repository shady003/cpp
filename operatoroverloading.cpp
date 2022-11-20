#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex (int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    complex operator+(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
     complex Display(complex y){

         cout<<y.real<<"+i"<<y.img<<endl;
     }
};
int main(){
                complex c1(34,6),c2(55,9),c3;
                c3=c1+c2;
                // cout<<(complex)c3;
              c1.Display(c3);
    return 0;
}