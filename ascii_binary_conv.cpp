#include <iostream>
using namespace std;

int main()
{              cout<<"Warning this converter coverts the value according to ASCII code for plane decimal to binary coversion press 2 ."<<endl;
    int bit;
    char c;
    cout << "How many bits binary conversion you want" << endl;
    cin >> bit;
    int array[bit];
    cout<< "Enter the value" << endl;
    cin >> c;
    int value = (int)c;
    cout << "The ASCII value is : " << value << endl;
    int i = 0;
    // Cleaning garbage value from array ;
    for (int k = bit ; k>=0 ; k--)
                array[k] = 0 ;
    while (value)
    {
        array[i] = value % 2;
        value = value / 2;
        i++;
    }
    cout << "The binary value is : ";
    for (i = bit; i >= 0; i--)
    {

        cout << array[i];
    }
    // holding page 
    cout.flush();
    cin.ignore(10000,'\n');
    cin.ignore(10000,'\n');
    return 0;
}