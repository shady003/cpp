#include <iostream>
using namespace std;
class Rectangle
{
public:
    float length;
    float bredth;

    float Area()
    {
        return length * bredth;
    }
    float Parameter()
    {

        return 2 * (length + bredth);
    }
};
int main()
{
    Rectangle r1, r2, r3;
    // Memory created in heap...
    Rectangle *p = new Rectangle;
    p->length = 10;
    p->bredth = 20;
    cout << p->Area() << endl;
    cout << p->Parameter() << endl;
    // pointer from heap pointing object in stack...
    Rectangle *p2 = &r1;
    p2->length = 20;
    p2->bredth = 20;
    cout << r1.Area() << endl;
    cout << r1.Parameter() << endl;
    p2 = &r2;
    p2->length = 30;
    p2->bredth = 30;
    cout << p2->Area() << endl;
    cout << p2->Parameter() << endl;
    p2 = &r3;
    p2->length = 40;
    p2->bredth = 40;
    cout << p2->Area() << endl;
    cout << p2->Parameter() << endl;
    return 0;
}