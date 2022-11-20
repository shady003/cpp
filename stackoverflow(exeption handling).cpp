#include <iostream>
#include <iomanip>

using namespace std;

//Template for Maximum

template <class X>
X Maximum(X arg1, X arg2)
{
    if (arg1 > arg2)
        return arg1;
    else
        return arg2;
}

//Template for Minimum

template <class M>
M Minimum(M arg1, M arg2)
{
    if (arg1 > arg2)
        return arg2;
    else
        return arg1;
}

/* Template for Divide(D arg1, D arg2) arg1: the dividend arg2: the divisor Description: 
Divides arg1 by arg2. If arg2 equals zero then an exception is thrown. */

template <class D>
D Divide(D arg1, D arg2)
{
    if (arg2 == 0) {
        throw "You cannot devide by zero! ";
    }
    return (arg1 / arg2);
}

int main()
{

    int a, b;
    float c, d;
    double e, f;
    a = 2;
    b = 22;
    cout << setprecision(4) << fixed << showpoint << "min:" << Minimum(a, b) << "\tmax: " << Maximum(a, b) << endl;
    c = 4.7f;
    d = 2.97f;
    cout << setprecision(4) << fixed << showpoint << "min:" << Minimum(c, d) << "\tmax: " << Maximum(c, d) << endl;

    e = 387.78;
    f = 387.7798;
    cout << setprecision(4) << fixed << showpoint << "min:" << Minimum(e, f) << "\tmax: " << Maximum(e, f) << endl;
    e = 40;
    f = 0;
    try {
        cout << setprecision(4) << fixed << showpoint << "Divide: " << e << '/' << f << " = " << Divide(e, f) << endl;
    }
    catch (string exceptionString) {
        cout << exceptionString;
    }
    system("pause");
    return 0;
}