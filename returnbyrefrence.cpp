#include <iostream>
using namespace std;
int& refrence(int& a){
               cout<<a<<endl ;
    return a; 
}
int main (){
                int x = 10 ;

                refrence(x)=25;

                cout<<x;
            return 0;
}