#include <iostream>
using namespace std;
int max(int x, int y)
{
        return x > y ? x : y;
}

int min(int x, int y)
{

        return x < y ? x : y;
}

int main()
{
        int x = 10;
        int &y = x; // refrence

        cout << y << endl;

        // function pointer

        int (*maxp)(int, int);
        maxp = max;
        int max = (*maxp)(10, 11);

        cout << "Maximum number is : " << max << endl;

        //    pointer value change

        maxp = min;

        max = (*maxp)(10, 11);
        cout << "Minimum number is : " << max;

        return 0;
}