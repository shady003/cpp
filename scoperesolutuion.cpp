#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b);
    void setLength(float l);
    void setBreadth(float b);
  inline  float area(); //This is a inline function tho it is inisilized outside the class...
};

Rectangle::Rectangle(float l = 0, float b = 0)
{
    setLength(l);
    setBreadth(b);
}
void Rectangle::setLength(float length)
{
    if (length < 0)
        cout << "Wrong_Input" << endl;
    else
       this-> length = length;
}
void Rectangle::setBreadth(float breadth)
{
    if (breadth < 0)
        cout << "Wrong_Input" << endl;
    else
        this-> breadth = breadth;
}
float Rectangle::area()
{

    return length * breadth;
}

int main()
{
    float length, breadth;
    cout << "Enter Length and Breadth Respectively" << endl;
    cin >> length >> breadth;
    Rectangle *p = new Rectangle;
    p->setLength(length);
    p->setBreadth(breadth);
    cout << p->area() << endl;

    return 0;
}
