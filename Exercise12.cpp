#include <iostream>
using namespace std;
const float PI = 3.14;
class Shape
{
public:
    virtual float area() = 0;
    virtual float parameter() = 0;
};
class Rectangle :  public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        if (l > 0 && b > 0)
        {
            length = l;
            breadth = b;
        }
        else
        {
            length = 1;
            breadth = 1;
        }
    }

    float area()
    {

        return length * breadth;
    }
    float parameter()
    {

        return 2 * (length + breadth);
    }
};
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        if (r > 0)
            radius = r;
        else
            radius = 1;
    }
    float area()
    {

        // std::cout<<
        return PI * (radius * radius);
    } 
    float parameter()
    {

        return 2 * (PI * radius);
    }
};
int main()
{
    float l, b, r;
    cout << "Enter length & breadth \n";
    cin >> l >> b;
    Shape *ptr;
    ptr = new Rectangle(l, b);
    cout << "Area :" << ptr->area() << endl;
    cout << "Parametr :" << ptr->parameter() << endl;
    cout << "\nEnter the radius of circle to calculate area and parameter \n";
    cin >> r;
    ptr = new Circle(r);
    cout << "Area :" << ptr->area() << endl;
    cout << "Parametr :" << ptr->parameter() << endl;
        system("pause > 0");

    return 0;
}
