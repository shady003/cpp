#include <iostream>
#include <math.h>
using namespace std;

int main(){                 cout<<"Find square of number ";
                    int a ;
                        cout<<"Enter number here >>>   ";
                            cin>>a;
                        int square = pow(5,2);
                        // int square = a*a;
                        cout<<"The square of "<<a<<" is "<<square<<endl;


                        // Holding for cmd windows (Useful while running code under cmd)
                    cout<<"Press any key to exit";
                    cout.flush();
                    cin.ignore(10000,'\n');
                    cin.ignore(10000,'\n');
                                             // code is not working properly at a = 5 ;



    return 0;
}
