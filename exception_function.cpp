#include <iostream>
using namespace std;
/*Exception Handling*/
class exceptionControl : exception
{
    int Error_Code;
    string Error;

public:
    exceptionControl(int x, string y)
    {
        Error_Code = x;
        Error = y;
    }
    void Display()
    {
        cout << "Error Code : " << Error_Code << endl
             << "Problem : " << Error << endl;
    }
};
/*Exception Handling*/
/*Class for Dividing*/
class divide
{
    float dividend, divisor, quotient;

public:
    void setDividend(float x)
    {
        dividend = x;
    }
    void setDivisor(float y)
    {
        divisor = y;
        /*try_catch*/
        try
        {
            if (y == 0)
                throw exceptionControl(101, "Divisor is set to zero || symbol .");
            quotient = dividend / divisor;
            cout << "Result : " << quotient << endl;
        }
        catch (exceptionControl s1)
        {
            s1.Display();
        }
    }
};
/*Class for Dividing*/
/*main*/
int main()
{
    class divide d1;
    int dividend, divisor, quotient;
    cout << "Enter the dividend \n";
    cin >> dividend;
    d1.setDividend(dividend);
    cout << "Enter the divisor \n";
    cin >> divisor;
    d1.setDivisor(divisor);
    system("pause>0");
    return 0;
}
/*main*/