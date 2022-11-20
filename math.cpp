#include <iostream>
#include <math.h>
using namespace std;
//  int pow(int a, int b){ int  d = a ;
                        
//             for (int i=1 ; i<b ; i++){
                
//                d = d * a ;
//             }
//             return d ;

//  } 
int main(){ 

                    int a ;
                // cout<<"Find square of number "<<"Enter number here >>> ";
                        
                            cin>>a;
                            cout<<pow(a,2);
                        int sq = pow(a,2);
                        //The basic way to find square [ int square = a*a; ]
                        cout<<sq<<endl;
                    cout<<"Press any key to exit";
                    cout.flush();
                    cin.ignore(10000,'\n');
                    cin.ignore(10000,'\n');
                    // not working properly at a = 5 problem is fixed by user defined function pow();

        return 0;
}
