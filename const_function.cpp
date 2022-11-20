#include <iostream>
#define PI (3.1425)
using namespace std;
void const fun( int &x ,  int &y)  {
            
            cout<<x<<endl<<y;
            

}
int main(){
    int a = 10 ,
     b =20 ;
    const int*  ptr = &a;
    // *ptr = *ptr+1;
    // (*ptr)++;
    cout<<a<<endl<<*ptr;
    cout<<"\n"<<PI;
    return 0;
}