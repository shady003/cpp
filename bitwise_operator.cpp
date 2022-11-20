#include <iostream>
using namespace std;
int main()
{
    cout << "Bitwise System" << endl;
    int x, y;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    cout << "X = " << x << " , Y= " << y << endl;
    // Bitwise & Operator
    int z = x & y;
    cout << "After performing & operator the value is " << z << endl;
    // Bitwise | Operator
    z = x | y;
    cout << "After performing | operator the value is " << z << endl;
    // Bitwise ^ Operator
    z = x ^ y;
    cout << "After performing ^ operator the value is " << z << endl;
    // left shift operator
    int c ,s ;
    cout<<"Enter value for left and right shifting"<<endl;
    
    cin>>c;
     s = c<<1;
    cout << "After performing << left shift operator on char value "<<c<<" the value is " <<(int)s <<endl;
    s = c>>1;
    cout << "After performing << left shift operator on char value "<<c<<" the value is " <<(int)s <<endl;


    // holding the cmd screen.
    cout << "Press any key to exit>>> ";
    cout.flush();
    cin.ignore(10000, '\n');
    cin.ignore(10000, '\n');
    return 0;
}