// ASCII Binary calculator
#include <iostream>
using namespace std;
int main(){  char c ;
        cout<<"Enter the value (Symbol)"<<endl;
        cin>>c;
        cout<<"Size of char is "<<sizeof(c)<<endl;
        cout <<"The ASCII value stored in c is "<<int(c)<<endl;

        // CALCULATING BINARY not working properly      loop making lots of complexitiy

       int b = int (c);
       cout<<b<<endl;
        int r ;
        int binary[9];
        
        while(c){         int j = 0 ;
                            
                            r = c%2;
                            b=c/2; 
                            binary[j]=r;
                            j++;
            
        }

        // printing process 
    for (int i = 9 ; i>=0 ; i-- ){

        cout<<binary[i];
    }

    return 0;
}