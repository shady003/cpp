#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;
    cout << "Enter number to devide\n";
    cout << "Enter dividend : ";
    cin >> a;
    cout << "Enter divisor : ";
    cin >> b;
    try
    {
        if (b == 0)
            throw "101";
        c = a / b;
        cout << "Quotient : " << c;
    }
    catch (string e)
    {
        cout << "Error Code " << e << " , A number can't be devided by zero" << endl;
    }
    system("pause>0");
    return 0;
}