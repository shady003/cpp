#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b);
    void setLength(float l);
    float getLength();
    void setBreadth(float b);
    float getBreadth();

    inline float area(); // This is a inline function tho it is inisilized outside the class...
};
float Rectangle::getLength()
{
    return length;
}
float Rectangle::getBreadth()
{
    return breadth;
}
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
        this->length = length;
}
void Rectangle::setBreadth(float breadth)
{
    if (breadth < 0)
        cout << "Wrong_Input" << endl;
    else
        this->breadth = breadth;
}
float Rectangle::area()
{

    return length * breadth;
}
class cuboid : public Rectangle
{
private:
    float height;

public:
    cuboid(float l = 0, float b = 0, float h = 0)
    {
        height = h;
        setLength(l);
        setBreadth(b);
    }
    float getHeight()
    {
        return height;
    }

    float volume(cuboid x)
    {

        return x.getLength() * x.getBreadth() * x.height;
    }
    float parameter(cuboid x);

    // float area();
};
float cuboid::parameter(cuboid x)
{
    return 2 * (x.getLength() + x.getBreadth() + x.getHeight());
}
ostream &operator<<(ostream &out, cuboid x)
{

    out << "length : " << x.getLength() << " breadth : " << x.getBreadth() << " Height : " << x.getHeight() << endl;
    return out;
}
/*Local area function of cuboid*/
// float cuboid::area()
// {

//     return getLength() * getBreadth() * getHeight();
// }

int main()
{

    Rectangle *ptr ;
    ptr = new cuboid(4,5,6);
    // ptr->volume(); is can 't get access ... only function of rectangle can be access.
    return 0;
} 