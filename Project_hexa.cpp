#include <iostream>
using namespace std;
/*function_cube*/
int cube (int c ){
    int cube = c*c*c;
    return c;

}
/*Palidrome function*/
int palidrome(int n, int digit)
{
    int initial = n;
    int a[digit], number = 0, r = 0, i = 0;
    while (n)
    {
        r = n % 10;
        n = n / 10;
        a[i] = r;
        i++;
    };
    for (int i = 0; i < digit; i++)
    {
        number = (number * 10) + a[i];
    }
    if (initial == number)
    {
        cout << "The number is palidrome";
        return 0;
    }
    else
    {
        cout << "The number is not palidrome";
        return 0;
    }
}
/*Armstrong function*/
int armstrong(int a, int digit)
{
    int arr[digit], r = 0, armstrong = a;
    int i = 0;
    while (a)
    {
        r = a % 10;
        a = a / 10;
        arr[i] = r;
        i++;
    }
    int d1=cube(arr[0]);
    int d2=cube(arr[1]);
    int d3=cube(arr[2]);
    int final = (d1+d2+d3);

    if (armstrong == final)
    {
        cout << "The number is armstrong";
        return 0;
    }
    else
    {
        cout << "The number is not armstrong";
        return 0;
    }
}
int main()
{
    return 0;
}