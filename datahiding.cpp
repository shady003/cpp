#include <iostream>
#define PI 3.14 
using namespace std;
class Circle
{
private:
    // float PI = 3.14f;
    float radius;

public:
// Mutator
    float setRadius(float r)
    {
            if (r>=0)
        radius = r;
        else 
        {
            cout<<"Wrong Input"<<endl;
            radius = 0 ;
        }
    }
// Accessor
    float Area()
    {

        return PI * (radius * radius);
    }
    float parameter()
    {

        return 2 * PI * radius;
    }
};
int main()
{
    float r;
    cout << "Enter the radius to check the area and parameter   " << endl;
    cin >> r;

    Circle *ptr = new Circle;

    ptr->setRadius(r);
    cout << "The area of given circle is : " << ptr->Area() << " And parameter is : "
         << ptr->parameter();
}
