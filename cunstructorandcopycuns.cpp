#include <iostream>
using namespace std;
class test
{
private:
    float length;
    float breadth;

public:
    float setLength(float x)
    {

        if (x < 0)
            cout << "Invalid Input of length"<<endl;
        else
            length = x;
    }
    float setBreath(float x)
    {

        if (x < 0)
            cout << "Invalid Input of breadth"<<endl;
        else
            breadth = x;
    }
    test(float x = 0, float y = 0)
    {
        setLength(x);
        setBreath(y);
    }
    float area()
    {

        return length * breadth;
    }
    test(test &t1)
    {
        length = t1.length;
        breadth = t1.breadth;
    }
};
int main()
{
    float length, breadth;
    cout << "Enter length and braeth to find area of rectangle " << endl;
    cout << "Enter length  ";
    cin >> length;
    cout << "Enter breadth  ";
    cin >> breadth;
    test *p = new test(length, breadth);
    cout << "The area of rectrangle is  " << p->area() << endl;
    test t2(*p);
    cout << "Answer by copy cunstructor   " << t2.area();
    return 0;
}