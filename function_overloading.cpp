#include <iostream>
using namespace std;
// function overloading
int add(int x , int y){

    return x+y;
}
// overloaded function
int add (int x , int y , int z ){

    return x + y + z;
}
// second oveloaded function
int add (int x , int y , int z , int x1){


    return x+y+z+x1;
}
int main(){
                int a = 10 , b = 11 , c =12 ;

                int d = add (a, b);
                int e = add (a,b,c);
                int f = add (a,b,c,d);

                cout<<"First function "<<d<<endl;
                cout<<"overloaded function "<<e<<endl;
                cout<<"Second overloaded function "<<f<<endl;
                cout<<"To see overloaded function check code "<<endl;
    return 0; 
}