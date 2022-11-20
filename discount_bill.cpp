#include <iostream>
using namespace std;

int main()
{
    int total ;
     int discount = 0, g_total;
    cout << "Discount-Bill" << endl
         << "Enter total amount" << endl;
    cin >> total;
    //discount 10%
    if (total <= 1000)
    {
        cout << total << endl;
        discount = (total*10)/100;
        g_total = total - discount;
    }
    //discount 20%
    else if (total <= 2000)
    {
        cout << total << endl;
        discount = (total*20)/100;
        g_total = total - discount;
    }
    //discount 30%
    else
    {
        cout<<total<<endl;
        discount = (total*30)/100;
        g_total = total - discount;
    }
    cout << "Discount applied : " <<discount<<endl
         << "Payable amount : " << g_total;
    return 0;
}