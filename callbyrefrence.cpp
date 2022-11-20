#include <iostream>
using namespace std;
// Call by refrence function...
int refrence (int &x , int &y){
                            int temp = x ;
                            x=y;
                            y=temp;
}

int main(){
    int a = 10 , b = 20 ;

                refrence (a,b);
                cout<<a<<" "<<b;

    return 0;
}