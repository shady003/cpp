#include <iostream>
using namespace std;
int global = 0 ;
    int function(int x){
        
        cout<<"Printing from funtion "<<global+x<<endl;
        return 0 ;
    }
    int main(){ int a = 7 ; // local for main...     
                    int global = 5;       
                cout<<"The global variable value is "<<::global<<endl;

                function(5);
            cout<<"printing from main function "<<global+a<<endl;

    }